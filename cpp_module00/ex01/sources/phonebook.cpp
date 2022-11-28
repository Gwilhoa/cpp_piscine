/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:57:15 by gchatain          #+#    #+#             */
/*   Updated: 2022/11/27 17:31:38 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iomanip>

phonebook::phonebook() : total(0)
{
	std::cout << "Constructor called" << std::endl;
}

phonebook::~phonebook()
{
	std::cout << "destructor called" << std::endl;
}

contact	*phonebook::getcontacts()
{
	return (this->contacts);
}

void	phonebook::add(int last)
{
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;
	
	while (first_name.length() == 0)
	{
		std::cout << "Enter first name: ";
		std::getline(std::cin, first_name);
	}
	while (last_name.length() == 0)
	{
		std::cout << "Enter last name: ";
		std::getline(std::cin, last_name);
	}
	while (nickname.length() == 0)
	{
		std::cout << "Enter nickname: ";
		std::getline(std::cin, nickname);
	}
	
	while (phone_number.length() == 0)
	{
		std::cout << "Enter phone number: ";
		std::getline(std::cin, phone_number);
	}
	while (darkest_secret.length() == 0)
	{
		std::cout << "Enter darkest secret: ";
		std::getline(std::cin, darkest_secret);
	}
	this->contacts[last] = contact(first_name, last_name, nickname, phone_number, darkest_secret);
	if (this->total != 8)
		this->total++;
}

std::string formatted_rep(std::string str)
{
	if (str.size() > 10)
	{
		str = str.substr(0, 9);
		str += ".";
	}
	return (str);
}

void	phonebook::search()
{
	std::string temp;
	int	p;
	int	i;

	i = 0;
	if (this->total == 0)
	{
		std::cout << "no contact in the phonebook";
		return;
	}
	std::cout << "   index  |first name|last name |nickname  |\n";
	while (i < this->total)
	{
		std::cout << "     " << std::to_string(i) << "    |" << std::right << std::setw(10) << formatted_rep(this->contacts[i].getname());
		std::cout << "|";
		std::cout << std::setw(10);
		std::cout << formatted_rep(this->contacts[i].getlastname());
		std::cout << "|";
		std::cout << std::setw(10);
		std::cout << formatted_rep(this->contacts[i].getnickname());
		std::cout << "|\n";
		i++;
	}
	if (i != 0)
	{
		std::cout << "index : " << std::endl;
		std::getline(std::cin, temp);
		if (temp.length() == 0)
		{
			std::cout << "principal menu" << std::endl;
			return;
		}
		try
		{
			p = std::stoi(temp);
			if (p < i && p > -1)
				std::cout << this->contacts[p].tostring();
			else
				std::cout << "undefined contact" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "ERROR INVALID ARGUMENTS" << std::endl;
		}
		
	}
}