/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 20:43:41 by gchatain          #+#    #+#             */
/*   Updated: 2023/01/11 13:35:33 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array() : _array(new T[0]), _size(0)
{
	std::cout << "[Array] default constructor called" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n)
{
	std::cout << "[Array] constructor called" << std::endl;
}

template <typename T>
Array<T>::Array(const Array &c)
{
	*this = c;
}

template <typename T>
Array<T>::~Array()
{
	delete[] _array;
	std::cout << "[Array] destructor called" << std::endl;
}

template <typename T>
void	Array<T>::operator=(const Array &f)
{
	_size = f._size;
	_array = new T[_size];
	for (size_t i = 0; i < _size; i++)
		_array[i] = f._array[i];
}

template <typename T>
T & Array<T>::operator[](unsigned int i) const
{
	if (i >= _size)
		throw std::exception();
	return _array[i];
}

template <typename T>
size_t Array<T>::size() const
{
	return _size;
}