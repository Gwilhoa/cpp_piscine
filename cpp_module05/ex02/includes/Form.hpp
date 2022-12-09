/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 00:14:48 by gchatain          #+#    #+#             */
/*   Updated: 2022/12/09 16:58:47 by gchatain         ###   ########.fr       */
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
		~Form();
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
		void execute(Bureaucrat const & executor) const;
		private :
			std::string const _name;
			bool _signed;
			int const _gradeToSign;
			int const _gradeToExecute;
};

std::ostream &operator<<(std::ostream &out, const Form &Form);
#endif

