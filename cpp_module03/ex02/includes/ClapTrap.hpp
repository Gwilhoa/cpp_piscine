/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 19:21:20 by gchatain          #+#    #+#             */
/*   Updated: 2022/12/05 01:02:52 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
class ClapTrap
{
	private :
		std::string	_Name;
		int			_HitPoint;
		int			_EnergyPoint;
		int			_Damage;
	public :
		//constructor
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &claptrap);
		~ClapTrap();

		//getter and setter
		std::string	getName() const;
		int			getHitPoint() const;
		int			getEnergyPoint() const;
		int			getDamagePoint() const;
		
		void		setName(std::string name);
		void		setHitPoint(int amount);
		void		setEnergyPoint(int amount);
		void		setDamagePoint(int amount);
		//function member
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		//affectation member
		ClapTrap & operator=(const ClapTrap &claptrap);
};