/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 13:15:26 by gchatain          #+#    #+#             */
/*   Updated: 2022/11/28 18:42:22 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
void	randomChump(std::string str);
Zombie	*newZombie(std::string name);

int main(int argc, char const *argv[])
{
	(void) argc;
	(void) argv;

	Zombie	*zombie = newZombie("Bob");
	zombie->announce();
	randomChump("Yann");
	delete zombie;
	return 0;
}
