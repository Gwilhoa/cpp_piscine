/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 18:07:21 by gchatain          #+#    #+#             */
/*   Updated: 2022/12/09 18:10:06 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef RobotomyRequestForm_HPP
# define RobotomyRequestForm_HPP
# include "Form.hpp"
#include <iostream>
class RobotomyRequestForm : public Form
{
	public :
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &c);
		~RobotomyRequestForm();
		RobotomyRequestForm & operator=(const RobotomyRequestForm &c);
		void execute(Bureaucrat const & executor) const;
	private :
		std::string _target;
};
#endif

