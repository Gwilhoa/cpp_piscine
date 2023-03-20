/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 23:12:56 by guilheimcha       #+#    #+#             */
/*   Updated: 2023/03/20 13:10:10 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/BitcoinExchange.hpp"

int isDateValid(std::string date)
{
    if 
    int month = atoi(date.substr(5, 2).c_str());
    int day = atoi(date.substr(8, 2).c_str());
    if (month > 12 || month < 1)
        return 1;
    if (day < 1 || day > 31)
        return 1;
    else if (month == 2 && day > 29)
        return 1;
    else if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
        return 1;
    return 0;
}


int main(int argc, char *argv[])
{
    std::ifstream verif;
    if (argc != 2)
    {
        std::cout << "Usage: ./btc [files]" << std::endl;
        return 1;
    }
    std::map<std::string, double> database = getDataBase();
    if (database.empty())
        return 1;
    readfile(argv[1], database);
    return 0;
}
