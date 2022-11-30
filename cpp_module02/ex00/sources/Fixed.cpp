/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:24:10 by gchatain          #+#    #+#             */
/*   Updated: 2022/11/29 18:16:47 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed(const Fixed &fixed) : _value()
{
	std::cout << "Copy assignment operator called" << std::endl;
	*this = fixed;
}


int Fixed::getRawBits()
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void Fixed::setRawBits(int nbr)
{
	this->_value = nbr;
}

Fixed::~Fixed() {
	std::cout << "destructor called" << std::endl;
}
