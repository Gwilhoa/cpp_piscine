/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 23:31:20 by gchatain          #+#    #+#             */
/*   Updated: 2022/12/09 17:03:12 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


Form::Form() : _name("default"), _signed(false), _gradeToSign(150), _gradeToExecute(150)
{
	std::cout << "[Form] default constructor called" << std::endl;
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	std::cout << "[Form] constructor called" << std::endl;
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
}

Form::Form(const Form &c) : _name(c._name), _signed(c._signed), _gradeToSign(c._gradeToSign), _gradeToExecute(c._gradeToExecute)
{
	*this = c;
}

Form::~Form()
{
	std::cout << "[Form] destructor called" << std::endl;
}

Form & Form::operator=(const Form &c) 
{
	this->_signed = c._signed;
	return (*this);
}

void Form::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() > this->_gradeToSign)
		throw GradeTooLowException();
	else if (this->_signed == true)
		std::cout << "Form is already signed" << std::endl;
	else
		this->_signed = true;
}

const char *Form::GradeTooHighException::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char *Form::GradeTooLowException::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

const char *Form::IsntSignedException::what() const throw()
{
	return ("Form not signed");
}

std::ostream &operator<<(std::ostream &out, const Form &Form)
{
	out << Form.getName() << ", grade to sign : " << Form.getGradeToSign() << ", grade to execute : " << Form.getGradeToExecute() << std::endl;
	return (out);
}

int Form::getGradeToSign() const
{
	return (_gradeToSign);
}

int Form::getGradeToExecute() const
{
	return (_gradeToExecute);
}

std::string Form::getName() const
{
	return (_name);
}

bool Form::getSigned() const
{
	return (_signed);
}

void Form::execute(Bureaucrat const & executor) const
{
	if (!_signed)
		throw IsntSignedException();
	else if (executor.getGrade() > this->_gradeToExecute)
		throw GradeTooLowException();
	else
		std::cout << executor.getName() << " has signed " << this->_name << std::endl;
}
