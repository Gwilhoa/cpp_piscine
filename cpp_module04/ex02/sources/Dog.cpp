/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 19:13:52 by gchatain          #+#    #+#             */
/*   Updated: 2022/12/06 20:54:59 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	this->_brain = new Brain();
	std::cout << "[Dog] default constructor called" << std::endl;
}

Dog::Dog(const Dog &c)
{
	*this = c;
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "[Dog] destructor called" << std::endl;
}

Dog & Dog::operator=(const Dog &c)
{
	this->_type = c._type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Wouf" << std::endl;
}
