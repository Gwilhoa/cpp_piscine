/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 17:26:19 by gchatain          #+#    #+#             */
/*   Updated: 2022/12/05 17:51:22 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed getAxe(Point left, Point right, Point mid)
{
	return ((left.getX() - mid.getX())*(right.getY() - mid.getY()) - (left.getY() - mid.getY())*(right.getX() - mid.getX()));
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed axe1 = getAxe(a, point, b);
	Fixed axe2 = getAxe(b, point, c);
	Fixed axe3 = getAxe(c, point, a);
	if (axe1 > 0 && axe2 > 0 && axe3 > 0)
		return (true);
	else if (axe1 < 0 && axe2 < 0 && axe3 < 0)
		return true;
	return (false);
}
