/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 20:00:12 by gchatain          #+#    #+#             */
/*   Updated: 2022/12/04 20:16:00 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
int main(void)
{
	ClapTrap empty;
	ClapTrap fish("fish");
	ClapTrap cat("cat");
	ClapTrap dog("dog");
	
	empty.attack("cat");
	fish.attack("cat");
	cat.attack("fish");
	fish.takeDamage(10);
	dog.attack("cat");
	cat.takeDamage(5);
	cat.beRepaired(5);
	cat.takeDamage(8);
	cat.beRepaired(1);
	cat.beRepaired(1);
	cat.beRepaired(1);
	cat.beRepaired(1);
	cat.beRepaired(1);
	cat.beRepaired(1);
	cat.beRepaired(1);
	cat.beRepaired(1);
	cat.beRepaired(1);
	cat.beRepaired(1);
	cat.beRepaired(1);
	cat.beRepaired(1);
	cat.beRepaired(1);
	cat.beRepaired(1);
	cat.attack("dog");
	fish.attack("cat");
	return 0;
}
