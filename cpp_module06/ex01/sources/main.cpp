/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 20:40:13 by gchatain          #+#    #+#             */
/*   Updated: 2022/12/10 20:52:12 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <data.hpp>


int main(int argc, char const *argv[])
{
	(void)argc;
	(void)argv;
	Data data;

	data.x = 42;
	data.y = 21;
	data.s1 = "Hello World";

	uintptr_t raw = serialize(&data);
	Data *data2 = deserialize(raw);
	std::cout << "x: " << data2->x << std::endl;
	std::cout << "y: " << data2->y << std::endl;
	std::cout << "s1: " << data2->s1 << std::endl;
	return 0;
}
