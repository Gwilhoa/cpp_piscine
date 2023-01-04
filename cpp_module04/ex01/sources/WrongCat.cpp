/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 19:13:56 by gchatain          #+#    #+#             */
/*   Updated: 2023/01/04 16:12:05 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("Cat")
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
	this->_type = c._type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "Uoaim" << std::endl;
}