/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 19:13:56 by gchatain          #+#    #+#             */
/*   Updated: 2022/12/06 20:55:11 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	this->_brain = new Brain();
	std::cout << "[Cat] default constructor called" << std::endl;
}

Cat::Cat(const Cat &c)
{
	*this = c;
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "[Cat] destructor called" << std::endl;
}

Cat & Cat::operator=(const Cat &c)
{
	this->_type = c._type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Miaou" << std::endl;
}