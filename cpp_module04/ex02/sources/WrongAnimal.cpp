/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 19:19:50 by gchatain          #+#    #+#             */
/*   Updated: 2023/01/04 15:41:32 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("Unknown Animal")
{
	std::cout << "[WrongAnimal] default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << "[WrongAnimal] " << type << " constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &c)
{
	*this = c;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "[WrongAnimal] destructor called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &c)
{
	this->_type = c._type;
	return (*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << "Gnos Elbiduani" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->_type);
}