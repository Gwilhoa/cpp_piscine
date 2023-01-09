/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 00:14:48 by gchatain          #+#    #+#             */
/*   Updated: 2023/01/09 14:45:00 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_HPP
# define FORM_HPP

class Bureaucrat;
#include <iostream>

#include "Bureaucrat.hpp"
class Form
{
	public :
		Form();
		Form(std::string name, int gradeToSign, int gradeToExecute);
		Form(const Form &c);
		virtual ~Form();
		Form & operator=(const Form &c);

		void	beSigned(const Bureaucrat &b);

		bool	getSigned() const;
		std::string getName() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;

		class GradeTooHighException : public std::exception
		{
			public :
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public :
				virtual const char* what() const throw();
		};
		class IsntSignedException : public std::exception
		{
			public :
				virtual const char* what() const throw();
		};
		class FormAlreadySignedException : public std::exception
		{
			public :
				virtual const char* what() const throw();
		};
		virtual void execute(Bureaucrat const & executor) const;
		private :
			std::string const _name;
			bool _signed;
			int const _gradeToSign;
			int const _gradeToExecute;
};

std::ostream &operator<<(std::ostream &out, const Form &Form);
#endif

