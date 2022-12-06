/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 20:22:09 by gchatain          #+#    #+#             */
/*   Updated: 2022/12/06 15:10:56 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
class ScavTrap : virtual public ClapTrap
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
#endif