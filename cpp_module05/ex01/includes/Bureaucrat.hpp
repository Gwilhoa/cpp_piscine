/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 13:29:58 by gchatain          #+#    #+#             */
/*   Updated: 2023/01/09 13:51:54 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
#include "Form.hpp"
#include <iostream>
class Form;

class Bureaucrat
{
	public :
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &c);
		~Bureaucrat();
		Bureaucrat & operator=(const Bureaucrat &c);

		int getGrade() const;
		std::string getName() const;
		void upGrade();
		void downGrade();
		void signForm(Form &form);


		class GradeTooHighException : public std::exception
		{
			public :
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public :
				const char* what() const throw();
		};

	private :
		std::string const _name;
		int _grade;
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &Bureaucrat);



#endif

