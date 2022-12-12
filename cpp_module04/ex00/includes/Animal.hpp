/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 19:19:59 by gchatain          #+#    #+#             */
/*   Updated: 2022/12/06 20:33:49 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#ifndef ANIMAL_HPP
# define ANIMAL_HPP
class Animal
{
	public :
		Animal();
		Animal(std::string type);
		Animal(const Animal &c);
		virtual ~Animal();
		Animal & operator=(const Animal &c);
		std::string getType() const;
		virtual void makeSound() const;
	protected :
		std::string _type;
};
#endif