/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 17:23:08 by gchatain          #+#    #+#             */
/*   Updated: 2022/12/05 23:15:56 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point
{
	public :
		Point();
		Point(const Fixed &x, const Fixed &y);
		Point(const float &x, const float &y);
		Point(const Point &c);
		~Point();
		Point & operator=(const Point &c);

		Fixed getX();
		Fixed getY();
	private :
		Fixed _x;
		Fixed _y;
};
