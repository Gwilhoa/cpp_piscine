/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:34:08 by gchatain          #+#    #+#             */
/*   Updated: 2022/12/12 15:55:31 by gchatain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
void iter(T *array, size_t length, void (*f)(T const &))
{
	size_t i;

	i = 0;
	while (i < length)
	{
		f(array[i]);
		i++;
	}
}
