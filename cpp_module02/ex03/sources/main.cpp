/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:21:33 by gchatain          #+#    #+#             */
/*   Updated: 2022/12/07 19:24:33 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( void ) {
	Fixed(1);
	Point a(Fixed(0), Fixed(6));
	Point b(Fixed(9), Fixed(5));
	Point c(Fixed(4), Fixed(0));

	Point d(Fixed(8), Fixed(2)); //out
	Point e(Fixed(4), Fixed(4)); //in
	Point f(Fixed(4), Fixed(0)); //out
	Point g(Fixed(3), Fixed(7)); //out
	Point h(Fixed(2), Fixed(4)); //in
	Point i(Fixed(2), Fixed(4)); //in


	std::cout << bsp(a,b,c,d) << " out" << std::endl;
	std::cout << bsp(a,b,c,e) << " in" << std::endl;
	std::cout << bsp(a,b,c,f) << " out" << std::endl;
	std::cout << bsp(a,b,c,g) << " out" << std::endl;
	std::cout << bsp(a,b,c,h) << " in" << std::endl;
	std::cout << bsp(a,b,c,i) << " in" << std::endl;
	return 0;
}