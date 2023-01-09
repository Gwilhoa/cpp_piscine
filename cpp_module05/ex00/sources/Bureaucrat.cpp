

#include "Bureaucrat.hpp"
Bureaucrat::Bureaucrat() : _name("default"), _grade(150)
{
	std::cout << "[Bureaucrate] default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		this->_grade = grade;
	std::cout << "[Bureaucrate] " << name << " constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &c)
{
	*this = c;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "[Bureaucrate] destructor called" << std::endl;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &c)
{
	this->_grade = c._grade;
	return (*this);
}

int Bureaucrat::getGrade() const
{
	return (_grade);
}

std::string Bureaucrat::getName() const
{
	return (_name);
}

void Bureaucrat::upGrade()
{
	if (_grade == 1)
		throw GradeTooHighException();
	else
		_grade--;
}

void Bureaucrat::downGrade()
{
	if (_grade == 150)
		throw GradeTooLowException();
	else
		_grade++;
}

const char *Bureaucrat::GradeTooHighException::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char *Bureaucrat::GradeTooLowException::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &Bureaucrat)
{
	out << Bureaucrat.getName() << ", grade : " << Bureaucrat.getGrade() << std::endl;
	return (out);
}