/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 22:28:19 by gchatain          #+#    #+#             */
/*   Updated: 2022/12/06 15:39:20 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

class DiamondTrap : public ScavTrap, public FragTrap
{
	public :
		DiamondTrap();
		DiamondTrap(const DiamondTrap &c);
		DiamondTrap(std::string name);
		~DiamondTrap();
		DiamondTrap & operator=(const DiamondTrap &c);
		void WhoAmI();
		using FragTrap::_hitPoint;
		using ScavTrap::_energyPoint;
		using FragTrap::_damage;
		using ScavTrap::attack;
	private :
		std::string name;
};
#endif
