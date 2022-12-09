/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 18:07:09 by gchatain          #+#    #+#             */
/*   Updated: 2022/12/09 18:14:10 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137), _target("default")
{
	std::cout << "[ShrubberyCreationForm] default constructor called" << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "[ShrubberyCreationForm]" << target << "constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &c)
{
	*this = c;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "[ShrubberyCreationForm] destructor called" << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &c)
{
	this->_target = c._target;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() == false)
		throw IsntSignedException();
	else if (executor.getGrade() > this->getGradeToExecute())
		throw GradeTooLowException();
	else
	{
		std::ofstream file;
		file.open(this->_target + "_shrubbery");
		file<<"     ccee88oo          "<<std::endl;
		file<<"  C8O8O8Q8PoOb o8oo"<<std::endl;
		file<<" dOB69QO8PdUOpugoO9bD"<<std::endl;
		file<<"CgggbU8OU qOp qOdoUOdcb"<<std::endl;
		file<<"    6OuU  /p u gcoUodpP"<<std::endl;
		file<<"      \\\\//  /douUP"<<std::endl;
		file<<"        \\\\////"<<std::endl;
		file<<"         |||/\\"<<std::endl;
		file<<"         |||\\/"<<std::endl;
		file<<"         |||||"<<std::endl;
		file<<"   ...../\\/||||\\...."<<std::endl;
		file.close();
	}
}