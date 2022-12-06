/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:10:01 by gchatain          #+#    #+#             */
/*   Updated: 2022/12/06 15:39:48 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap()
{
	std::cout << "[DiamondTrap] default constructor called" << std::endl;
}
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), name(name)
{
	std::cout << "[DiamondTrap] "<<name<< "constructor called" << std::endl;
}
DiamondTrap::DiamondTrap(const DiamondTrap &c)
{
	*this = c;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "[DiamondTrap] destructor called" << std::endl;
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap &c)
{
	this->name = c.name;
	this->_damage = c._damage;
	this->_energyPoint = c._energyPoint;
	this->_hitPoint = c._hitPoint;
	this->_name = c._name;


	return (*this);
}

void DiamondTrap::WhoAmI()
{
	std::cout << "i am " << this->_name << " - " << this->name << std::endl;
}