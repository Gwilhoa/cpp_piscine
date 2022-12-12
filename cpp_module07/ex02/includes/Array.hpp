/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 20:43:45 by gchatain          #+#    #+#             */
/*   Updated: 2022/12/12 21:43:37 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef Array_HPP
# define Array_HPP
#include <iostream>
template <typename T>
class Array
{
	public :
		Array();
		Array(unsigned int n);
		Array(const Array &c);
		~Array();
		void operator=(const Array &c);
		T & operator[](unsigned int i) const;
		size_t size() const;
	private :
		T * _array;
		size_t _size;
};

#include "Array.tpp"
#endif

