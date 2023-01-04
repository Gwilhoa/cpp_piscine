/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 19:13:56 by gchatain          #+#    #+#             */
/*   Updated: 2023/01/04 16:33:58 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("Cat")
{
	std::cout << "[WrongCat] default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &c)
{
	*this = c;
}

WrongCat::~WrongCat()
{
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