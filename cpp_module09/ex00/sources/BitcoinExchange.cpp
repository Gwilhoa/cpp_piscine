/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 23:12:52 by guilheimcha       #+#    #+#             */
/*   Updated: 2023/03/20 13:13:46 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"


std::map<std::string, double> getDataBase()
{
    std::map<std::string, double> database;
    std::ifstream data;
    data.open("data.csv", std::ios::in);
    if (!data.is_open())
    {
        std::cout << "Error: file not found" << std::endl;
        return database;
    }
    std::string line;
    std::getline(data, line);
    while (std::getline(data, line))
    {
        if (line.find(',') == std::string::npos)
        {
            std::cout << "invalid database => " << line << std::endl;
            return std::map<std::string, double>();
        }
        std::string first = line.substr(0, line.find(','));
        std::string second = line.substr(line.find(',') + 1, line.size());
        try {
            database[first] = strtod(second.c_str(), NULL);
        } catch (std::exception &e) {
            std::cout << "invalid database" << line << std::endl;
            return std::map<std::string, double>();
        }
    }
    data.close();
    return database;
}

void readfile(std::string filename, std::map<std::string, double> database)
{
    std::ifstream file;
    file.open(filename.c_str(), std::ios::in);
    if (!file.is_open())
    {
        std::cout << "Error: file not found" << std::endl;
        return;
    }
    std::string line;
    std::getline(file, line);
    while (std::getline(file, line))
    {
        if (line.find('|') == std::string::npos)
        {
            std::cout << "bad input => " << line << std::endl;
            continue;
        }
        std::string first = line.substr(0, line.find('|'));
        std::string temp = line.substr(line.find('|') + 1, line.size());
        bool f = false;
        for (size_t i = 0; i < temp.size(); i++)
        {
            if (!isdigit(temp[i]) && temp[i] != '.' && temp[i] != '-' && temp[i] != ',' && temp[i] != ' ')
            {
                std::cout << "bad input => " << line << std::endl;
                f = true;
            }
        }
        if (f)
            continue;
        double second;
        second = strtod(line.substr(line.find('|') + 1, line.size()).c_str(), NULL);
        if (isDateValid(first))
        {
            std::cout << "Invalid Date ===> " << first << std::endl;
            continue;
        }
        if (second < 0 || second > 1000)
        {
            std::cout << "Invalid Amount ==> " << second << std::endl;
            continue;
        }
        std::string index;
        if (database.find(first) != database.end())
            index = database.find(first)->first;
        else
        {
            if (database.lower_bound(first) != database.end())
                index = database.lower_bound(first)->first;
            else
                index = database.rbegin()->first;
        }
        if (index > first)
        {
            if (database.lower_bound(first) != database.begin())
                index = (--database.lower_bound(first))->first;
            else {
                std::cout << "too early for database" << std::endl;
                continue;
            }
        }
        std::cout << first << " => " << second << " = " << database[index] * second << std::endl;
    }
}

