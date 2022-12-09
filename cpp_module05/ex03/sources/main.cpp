/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:28:09 by gchatain          #+#    #+#             */
/*   Updated: 2022/12/09 19:35:33 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	// Bureaucrat b4("b1", 151);
	// std::cout << b4.getName() << " " << b4.getGrade() << std::endl;
	try
	{
		Bureaucrat b1("b1", 1);
		std::cout << b1.getName() << " " << b1.getGrade() << std::endl;
		Bureaucrat b2("b2", 150);
		std::cout << b2.getName() << " " << b2.getGrade() << std::endl;
		Bureaucrat b3("b3", 0);
		std::cout << b3.getName() << " " << b3.getGrade()  << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	//test for class Form
	try
	{
		Form f1("f1", 1, 1);
		std::cout << f1.getName() << " " << f1.getGradeToSign() << " " << f1.getGradeToExecute() << std::endl;
		Form f2("f2", 150, 150);
		std::cout << f2.getName() << " " << f2.getGradeToSign() << " " << f2.getGradeToExecute() << std::endl;
		Form f3("f3", 0, 0);
		std::cout << f3.getName() << " " << f3.getGradeToSign() << " " << f3.getGradeToExecute() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	//test for BeSigned 
	try
	{
		Form f1("f1", 1, 1);
		std::cout << f1.getName() << " " << f1.getGradeToSign() << " " << f1.getGradeToExecute() << std::endl;
		Bureaucrat b1("b1", 1);
		std::cout << b1.getName() << " " << b1.getGrade() << std::endl;
		b1.signForm(f1);
		std::cout << f1.getName() << " " << f1.getGradeToSign() << " " << f1.getGradeToExecute() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	//test for BeSigned Form
	try
	{
		Form f1("f1", 1, 1);
		std::cout << f1.getName() << " " << f1.getGradeToSign() << " " << f1.getGradeToExecute() << std::endl;
		Bureaucrat b1("b1", 2);
		std::cout << b1 << std::endl;
		f1.beSigned(b1);
		std::cout << f1 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	//test for PresidentialPardonForm
	try
	{
		PresidentialPardonForm f1("f1");
		std::cout << f1.getName() << " " << f1.getGradeToSign() << " " << f1.getGradeToExecute() << std::endl;
		Bureaucrat b1("b1", 1);
		std::cout << b1 << std::endl;
		f1.beSigned(b1);
		std::cout << f1 << std::endl;
		f1.execute(b1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	//test for RobotomyRequestForm
	try
	{
		RobotomyRequestForm f1("f1");
		std::cout << f1.getName() << " " << f1.getGradeToSign() << " " << f1.getGradeToExecute() << std::endl;
		Bureaucrat b1("b1", 1);
		std::cout << b1 << std::endl;
		f1.beSigned(b1);
		std::cout << f1 << std::endl;
		f1.execute(b1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	//test for ShrubberyCreationForm
	try
	{
		ShrubberyCreationForm f1("f1");
		std::cout << f1.getName() << " " << f1.getGradeToSign() << " " << f1.getGradeToExecute() << std::endl;
		Bureaucrat b1("b1", 1);
		std::cout << b1 << std::endl;
		f1.beSigned(b1);
		std::cout << f1 << std::endl;
		f1.execute(b1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	//test for executeForm
	try
	{
		ShrubberyCreationForm f1("f1");
		std::cout << f1.getName() << " " << f1.getGradeToSign() << " " << f1.getGradeToExecute() << std::endl;
		Bureaucrat b1("b1", 1);
		std::cout << b1 << std::endl;
		f1.beSigned(b1);
		std::cout << f1 << std::endl;
		b1.executeForm(f1);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	//test for Intern
	try
	{
		Intern i1;
		Form *f1 = i1.makeForm("robotomy request", "f1");
		std::cout << f1->getName() << " " << f1->getGradeToSign() << " " << f1->getGradeToExecute() << std::endl;
		Bureaucrat b1("b1", 1);
		std::cout << b1 << std::endl;
		f1->beSigned(b1);
		std::cout << *f1 << std::endl;
		b1.executeForm(*f1);
		delete f1;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}