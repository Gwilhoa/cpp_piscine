/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 11:58:04 by gchatain          #+#    #+#             */
/*   Updated: 2023/01/11 13:27:54 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void disp( int const & x ) 
{
std::cout << x << std::endl;
}

void dispString( std::string const & x ) 
{
std::cout << x << std::endl;
}

int main( void ) 
{
	int tab[] = { 0, 1, 2, 3, 4 };
	::iter( tab, (size_t)5, disp );

	std::string tab2[] = { "Hello", "World", "!" };
	::iter( tab2, (size_t)3, dispString );
	return 0;
}