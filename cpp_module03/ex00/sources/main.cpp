/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 20:00:12 by gchatain          #+#    #+#             */
/*   Updated: 2022/12/06 19:08:29 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
int main(void)
{
	ClapTrap claptrap("ClapTrap");
	claptrap.attack("target");
	claptrap.takeDamage(10);
	claptrap.beRepaired(10);
	for (int i = 0; i < 10; i++)
		claptrap.attack("target");
	claptrap.beRepaired(10);
	claptrap.takeDamage(100);
	claptrap.beRepaired(100);
	
	return 0;
}
