/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 18:07:29 by gchatain          #+#    #+#             */
/*   Updated: 2022/12/09 18:09:44 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PresidentialPardonForm_HPP
# define PresidentialPardonForm_HPP
#include <iostream>
# include "Form.hpp"
class PresidentialPardonForm : public Form
{
	public :
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &c);
		~PresidentialPardonForm();
		void execute(Bureaucrat const & executor) const;
		PresidentialPardonForm & operator=(const PresidentialPardonForm &c);
		private :
			std::string _target;
};
#endif

