/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 20:00:12 by gchatain          #+#    #+#             */
/*   Updated: 2022/12/06 15:42:59 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
int main(void)
{
	FragTrap scavTrap("FragTrap");
	scavTrap.attack("target");
	scavTrap.takeDamage(10);
	scavTrap.beRepaired(10);
	scavTrap.highFivesGuys();
	return (0);
}
