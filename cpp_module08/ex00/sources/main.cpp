/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 12:23:06 by gchatain          #+#    #+#             */
/*   Updated: 2022/12/29 13:44:43 by gchatain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <iostream>
int main()
{
	std::vector<int> v;
	std::vector<int> t;
	for (int i = 0; i < 10; i++)
	{
		if (i != 5)
			t.push_back(i);
		v.push_back(i);
	}
	std::cout << easyfind(v, 5)[0] << std::endl;
	try
	{
		std::cout << easyfind(t, 5)[0] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
