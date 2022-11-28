/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 15:49:58 by gchatain          #+#    #+#             */
/*   Updated: 2022/11/28 18:57:25 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
int main(int argc, char const *argv[])
{
	(void) argc;
	(void) argv;
	std::string str;
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	str = "HI THIS IS BRAIN";
	std::cout << "adresse de str : " << &str << std::endl;
	std::cout << "L’adresse stockee dans stringPTR : " << stringPTR << std::endl;
	std::cout << "L’adresse stockee dans stringREF : " << &stringREF << std::endl;

	std::cout << "valeur de str : " << str << std::endl;
	std::cout << "valeur pointee par stringPTR : " << *stringPTR << std::endl;
	std::cout << "valeur pointee par stringREF : " << stringREF << std::endl;
	return 0;
}
