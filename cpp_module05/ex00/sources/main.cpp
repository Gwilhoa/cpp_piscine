/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:28:09 by gchatain          #+#    #+#             */
/*   Updated: 2022/12/07 23:30:27 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	// Bureaucrat b4("b1", 151);
	// std::cout << b4.getName() << " " << b4.getGrade() << std::endl;
	try
	{
		Bureaucrat b1("b1", 1);
		std::cout << b1 << std::endl;
		Bureaucrat b2("b2", 150);
		std::cout << b2 << std::endl;
		Bureaucrat b3("b3", 0);
		std::cout << b3 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}