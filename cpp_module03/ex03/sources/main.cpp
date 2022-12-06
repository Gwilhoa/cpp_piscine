/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 20:00:12 by gchatain          #+#    #+#             */
/*   Updated: 2022/12/06 15:38:56 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>
int main(void)
{
	DiamondTrap diamond("diamond");
	diamond.attack("ClapTrap");
	diamond.takeDamage(10);
	diamond.beRepaired(10);
	diamond.WhoAmI();
	return 0;
}
