/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 13:58:17 by gchatain          #+#    #+#             */
/*   Updated: 2022/12/29 14:23:48 by gchatain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _N(0), _value(0), _vector(std::vector<int>(0))
{
}

Span::Span(unsigned int n) : _N(n), _value(0), _vector(std::vector<int>(n))
{
}

Span::Span(const Span & src)
{
	*this = src;
}

Span & Span::operator=(const Span & rhs)
{
	if (this != &rhs)
	{
		this->_N = rhs._N;
		this->_value = rhs._value;
		this->_vector = rhs._vector;
	}
	return *this;
}

Span::~Span()
{
}

unsigned int Span::shortestSpan()
{
	if (_vector.size() < 2)
		throw NoSpanException();
	std::sort(_vector.begin(), _vector.end());
	long min = _vector[1] - _vector[0];
	for (size_t i = 1; i < _vector.size() - 1; i++)
	{
		if (_vector[i + 1] - _vector[i] < min)
			min = _vector[i + 1] - _vector[i];
	}
	return min;
}

unsigned int Span::longestSpan()
{
	if (_vector.size() < 2)
		throw NoSpanException();
	std::sort(_vector.begin(), _vector.end());
	return _vector[_vector.size() - 1] - _vector[0];
}

void Span::addNumber(int n)
{
	if (_value == _N)
		throw FullException();
	_vector.push_back(n);
	_value++;
}