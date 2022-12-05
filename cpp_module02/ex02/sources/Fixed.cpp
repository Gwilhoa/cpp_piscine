/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:24:10 by gchatain          #+#    #+#             */
/*   Updated: 2022/12/05 23:14:23 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <ostream>

Fixed::Fixed() : _value(0)
{
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) : _value()
{
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

Fixed::~Fixed() {
	//std::cout << "destructor called" << std::endl;
}


int Fixed::getRawBits() const
{
	return (this->_value);
}

float	Fixed::toFloat(void) const
{
	return ((int)_value / ((1 << _bits)));
}

int		Fixed::toInt(void) const
{
	return(roundf(_value / (1 << _bits)));
}

void Fixed::setRawBits(int nbr)
{
	this->_value = nbr;
}


std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}

Fixed & Fixed::operator=(const Fixed &fixed)
{
	if (this == &fixed)
		return (*this);
	this->_value = fixed._value;
	return(*this);
}

Fixed & Fixed::operator*(const Fixed &fixed)
{
	this->_value *= fixed._value;
	this->_value >>= this->_bits;
	return(*this);
}

Fixed & Fixed::operator/(const Fixed &fixed)
{
	this->_value <<= this->_bits;
	this->_value /= fixed._value;
	return(*this);
}

Fixed & Fixed::operator+(const int nbr)
{
	this->_value = this->_value + nbr;
	return(*this);
}

Fixed & Fixed::operator-(const int nbr)
{
	this->_value = this->_value - nbr;
	return(*this);
}

Fixed & Fixed::operator++(void)
{
	this->_value = this->_value + 1;
	return(*this);
}

Fixed Fixed::operator++(int nbr)
{
	(void) nbr;
	Fixed tmp(*this);
	this->operator++();
	return(tmp);
}

Fixed & Fixed::operator--(void)
{
	this->_value = this->_value - 1;
	return(*this);
}

Fixed Fixed::operator--(int nbr)
{
	(void) nbr;
	Fixed tmp(*this);
	this->operator--();
	return(tmp);
}

bool Fixed::operator>(const Fixed &fixed) const
{
	return (this->_value > fixed._value);
}

bool Fixed::operator<(const Fixed &fixed) const
{
	return (this->_value < fixed._value);
}

bool Fixed::operator>=(const Fixed &fixed) const
{
	return (this->_value >= fixed._value);
}

bool Fixed::operator<=(const Fixed &fixed) const
{
	return (this->_value <= fixed._value);
}

bool Fixed::operator==(const Fixed &fixed) const
{
	return (this->_value == fixed._value);
}

bool Fixed::operator!=(const Fixed &fixed) const
{
	return (this->_value != fixed._value);
}

Fixed Fixed::max(const Fixed &fixed1, const Fixed &fixed2)
{
	if (fixed1 > fixed2)
		return (fixed1);
	return (fixed2);
}

Fixed Fixed::min(const Fixed &fixed1, const Fixed &fixed2)
{
	if (fixed1 < fixed2)
		return (fixed1);
	return (fixed2);
}

Fixed Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1 > fixed2)
		return (fixed1);
	return (fixed2);
}

Fixed Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1 < fixed2)
		return (fixed1);
	return (fixed2);
}

