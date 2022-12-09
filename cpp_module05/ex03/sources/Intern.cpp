/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 19:08:53 by gchatain          #+#    #+#             */
/*   Updated: 2022/12/09 19:17:54 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "[Intern] default constructor called" << std::endl;
}

Intern::Intern(const Intern &c)
{
	*this = c;
}

Intern::~Intern()
{
	std::cout << "[Intern] destructor called" << std::endl;
}

Intern & Intern::operator=(const Intern &c)
{
	(void)c;
	return (*this);
}

Form *Intern::makeForm(std::string formName, std::string target)
{
	Form *form = NULL;
	std::string formNames[3] = {"robotomy request", "shrubbery creation", "presidential pardon"};
	for (int i = 0; i < 3; i++)
	{
		if (formName == formNames[i])
		{
			switch (i)
			{
				case 0:
					form = new RobotomyRequestForm(target);
					break;
				case 1:
					form = new ShrubberyCreationForm(target);
					break;
				case 2:
					form = new PresidentialPardonForm(target);
					break;
			}
			std::cout << "Intern creates " << formName << std::endl;
			return (form);
		}
	}
	std::cout << "Intern can't create " << formName << std::endl;
	return (NULL);
}
