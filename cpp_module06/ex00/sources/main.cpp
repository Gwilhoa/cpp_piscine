/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 22:44:18 by gchatain          #+#    #+#             */
/*   Updated: 2022/12/10 16:43:25 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Converter.hpp>

int main(int argc, char *argv[])
{
	if (argc == 2 && argv[1][0] != '\0')
	{
		Converter c(argv[1]);
		c.convertChar();
		c.convertInt();
		c.convertFloat();
		c.convertDouble();
	}
	else
		std::cout << "you must enter a parameter" << std::endl;
}