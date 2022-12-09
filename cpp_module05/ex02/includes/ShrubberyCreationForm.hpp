/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 18:07:25 by gchatain          #+#    #+#             */
/*   Updated: 2022/12/09 18:09:30 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ShrubberyCreationForm_HPP
# define ShrubberyCreationForm_HPP
#include <iostream>
# include "Form.hpp"
class ShrubberyCreationForm : public Form
{
	public :
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &c);
		~ShrubberyCreationForm();
		ShrubberyCreationForm & operator=(const ShrubberyCreationForm &c);
		void execute(Bureaucrat const & executor) const;
	private :
		std::string _target;
};
#endif

