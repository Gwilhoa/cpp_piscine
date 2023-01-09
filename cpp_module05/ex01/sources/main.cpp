/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:28:09 by gchatain          #+#    #+#             */
/*   Updated: 2023/01/09 13:56:58 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	// Bureaucrat b4("b1", 151);
	// std::cout << b4.getName() << " " << b4.getGrade() << std::endl;
	Bureaucrat b1("b1", 1);
	std::cout << b1 << std::endl;
	Bureaucrat b2("b2", 150);
	Bureaucrat b5("b5", 130);
	std::cout << b2 << std::endl;
	std::cout << "------- test too low --------" << std::endl;
	try {
		Bureaucrat b3("b3", 0);
		std::cout << b3 << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "------- test too high --------" << std::endl;
	try {
		Bureaucrat b4("b4", 151);
		std::cout << b4 << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "------- test up and down --------" << std::endl;
	try {
		b1.upGrade();
		std::cout << b1 << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		b2.downGrade();
		std::cout << b2 << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << b5 << std::endl;
	try {
		b5.upGrade();
		std::cout << b5 << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		b5.downGrade();
		std::cout << b5 << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "------- test form --------" << std::endl;
	
	Form f1("f1", 1, 1);
	std::cout << f1 << std::endl;
	Form f2("f2", 150, 150);
	std::cout << f2 << std::endl;
	try {
		Form f3("f3", 0, 0);
		std::cout << f3 << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Form f4("f4", 151, 151);
		std::cout << f4 << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "------- test sign --------" << std::endl;
	b2.signForm(f1);
	b1.signForm(f1);
	try {
		f1.beSigned(b5);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}