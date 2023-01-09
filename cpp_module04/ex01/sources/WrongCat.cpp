/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 19:13:56 by gchatain          #+#    #+#             */
/*   Updated: 2023/01/07 15:15:32 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	this->_brain = new Brain();
	std::cout << "[WrongCat] default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &c)
{
	*this = c;
}

WrongCat::~WrongCat()
{
	delete this->_brain;
	std::cout << "[WrongCat] destructor called" << std::endl;
}

WrongCat & WrongCat::operator=(const WrongCat &c)
{
	this->_brain = new Brain(*c._brain);
	this->_type = c._type; 
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "Uoaim" << std::endl;
}