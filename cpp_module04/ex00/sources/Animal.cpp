/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 19:19:50 by gchatain          #+#    #+#             */
/*   Updated: 2022/12/06 20:27:13 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Animal.hpp"

Animal::Animal() : _type("Unknown Animal")
{
	std::cout << "[Animal] default constructor called" << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "[Animal] " << type << " constructor called" << std::endl;
}

Animal::Animal(const Animal &c)
{
	*this = c;
}

Animal::~Animal()
{
	std::cout << "[Animal] destructor called" << std::endl;
}

Animal & Animal::operator=(const Animal &c)
{
	this->_type = c._type;
	return (*this);
}

void Animal::makeSound() const
{
	std::cout << "Inaudible Song" << std::endl;
}

std::string Animal::getType() const
{
	return (this->_type);
}