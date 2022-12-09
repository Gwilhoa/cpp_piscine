/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 19:08:59 by gchatain          #+#    #+#             */
/*   Updated: 2022/12/09 19:09:00 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef Intern_HPP
# define Intern_HPP
#include <iostream>
#include "Form.hpp"
class Intern
{
	public :
		Intern();
		Intern(const Intern &c);
		~Intern();
		Intern & operator=(const Intern &c);
		Form *makeForm(std::string formName, std::string target);
};
#endif

