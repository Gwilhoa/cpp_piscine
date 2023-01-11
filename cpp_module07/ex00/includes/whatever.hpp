/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:34:08 by gchatain          #+#    #+#             */
/*   Updated: 2023/01/11 13:16:06 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void swap( T & a, T & b ) {
T tmp = a;
a = b;
b = tmp;
}

template <typename T>
T min( T & a, T & b ) {
	if (a < b)
		return a;
	else
		return b;
}

template <typename T>
T max( T & a, T & b ) {
	if (a > b)
		return a;
	else
		return b;
}
