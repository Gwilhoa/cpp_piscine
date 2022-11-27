/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 19:01:38 by gchatain          #+#    #+#             */
/*   Updated: 2022/11/27 15:40:29 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(int argc, char const *argv[])
{
	(void) argv;
	phonebook pb;
	std::string str;
	int last_contact = 0;

	std::cout << "\nEnter command: ";
	while (std::getline(std::cin, str))
	{
		if (str.compare("ADD") == 0)
		{
			pb.add(last_contact);
			last_contact++;
			if (last_contact == 8)
				last_contact = 0;
		}
		else if (str.compare("SEARCH") == 0)
			pb.search(last_contact);
		else if (str.compare("EXIT") == 0)
		{
			std::cout << "disconnected..." << std::endl;
			return (0);
		}
		else
			std::cout << "\nError : " << str << " command not found";
		std::cout << "\nEnter command: ";
	}
	std::cout << "\nforced exit" << std::endl;
	return argc;
}
