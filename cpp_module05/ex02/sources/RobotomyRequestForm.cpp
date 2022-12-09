/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 18:07:15 by gchatain          #+#    #+#             */
/*   Updated: 2022/12/09 18:15:24 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45), _target("default")
{
	std::cout << "[RobotomyRequestForm] default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << "[RobotomyRequestForm]" << target << "constructor called" << std::endl;
}


RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &c)
{
	*this = c;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "[RobotomyRequestForm] destructor called" << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &c)
{
	this->_target = c._target;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{

	if (!this->getSigned())
		throw IsntSignedException();
	else if (executor.getGrade() > this->getGradeToExecute())
		throw GradeTooLowException();
	else
	{
		std::cout << "BZZZZZZZZZZZZZZZZZ" << std::endl;
		if (rand() % 2)
			std::cout << this->_target << " has been robotomized successfully" << std::endl;
		else
			std::cout << this->_target << " robotomization failed" << std::endl;
	}
}


