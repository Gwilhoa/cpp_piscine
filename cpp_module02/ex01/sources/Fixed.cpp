/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:24:10 by gchatain          #+#    #+#             */
/*   Updated: 2022/12/05 23:13:50 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <ostream>

Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) : _value()
{
	std::cout << "Copy assignment operator called" << std::endl;
	*this = fixed;
}

Fixed::Fixed(const float nbr) : _value(roundf(nbr * (1 << _bits)))
{
	std::cout << "float constructor called" << std::endl;
}

Fixed::Fixed(const int nbr) : _value(roundf((float) nbr * (1 << _bits)))
{
	std::cout << "int constructor called" << std::endl;
}

int Fixed::getRawBits() const
{
	return (this->_value);
}

float	Fixed::toFloat(void) const
{
	return ((int)_value / (1 << _bits)));
}

int		Fixed::toInt(void) const
{
	return(roundf(_value / (1 << _bits)));
}

void Fixed::setRawBits(int nbr)
{
	this->_value = nbr;
}

Fixed & Fixed::operator=(const Fixed &fixed)
{
	if (this == &fixed)
		return (*this);
	this->_value = fixed._value;
	return(*this);
}

Fixed::~Fixed() {
	std::cout << "destructor called" << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}