/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 13:15:26 by gchatain          #+#    #+#             */
/*   Updated: 2022/11/08 13:38:34 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
int main()
{
	Zombie *ZombieHorde(int N, std::string str);
	int i;
	
	Zombie *zombie;
	zombie = ZombieHorde(10, "Bob");
	i = 0;
	while (i < 10)
	{
		zombie[i].announce();
		i++;
	}
	delete[] zombie;
	return 0;
}
