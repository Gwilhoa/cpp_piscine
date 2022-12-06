/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 20:22:09 by gchatain          #+#    #+#             */
/*   Updated: 2022/12/05 14:36:15 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap & scavtrap);
	~ScavTrap();

	ScavTrap & operator=(const ScavTrap & scavtrap);
	void guardGate();
	void attack(const std::string& target);
	
};
