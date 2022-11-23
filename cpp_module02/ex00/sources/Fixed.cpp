/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:24:10 by gchatain          #+#    #+#             */
/*   Updated: 2022/11/23 16:02:58 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->nb = 0;
	this->bit = 0;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	*this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	this->nb = fixed.nb;
	this->bit = fixed.bit;
}

int Fixed::getRawBits()
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->nb);
}

void Fixed::setRawBits(int nbr)
{
	this->nb = nbr;
}