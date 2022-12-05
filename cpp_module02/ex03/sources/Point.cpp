/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 17:23:15 by gchatain          #+#    #+#             */
/*   Updated: 2022/12/05 23:19:33 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{
	//std::cout << "[Point] default constructor called" << std::endl;
}

Point::Point(const float &x, const float &y) : _x(x), _y(y)
{
	//std::cout << "[Point] constructor called" << std::endl;
}

Point::Point(const Fixed &x, const Fixed &y) : _x(x), _y(y)
{
	//std::cout << "[Point] constructor called" << std::endl;
}

Point::Point(const Point &c)
{
	*this = c;
}

Point::~Point()
{
	//std::cout << "[Point] destructor called" << std::endl;
}

Point & Point::operator=(const Point &c)
{
	this->_x = c._x;
	this->_y = c._y;
	return (*this);
}

Fixed Point::getX()
{
	return (this->_x);
}

Fixed Point::getY()
{
	return (this->_y);
}