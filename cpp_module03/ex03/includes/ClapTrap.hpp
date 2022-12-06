/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 19:21:20 by gchatain          #+#    #+#             */
/*   Updated: 2022/12/06 14:47:53 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
class ClapTrap
{
	protected :
		std::string	_name;
		int			_hitPoint;
		int			_energyPoint;
		int			_damage;
	public :
		//constructor
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &claptrap);
		~ClapTrap();

		//function member
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		//affectation member
		ClapTrap & operator=(const ClapTrap &claptrap);
};
#endif