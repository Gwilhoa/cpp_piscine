/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 21:43:31 by gchatain          #+#    #+#             */
/*   Updated: 2022/12/05 00:48:08 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->setHitPoint(100);
	this->setEnergyPoint(50);
	this->setDamagePoint(20);
	std::cout << "[ScavTrap] default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->setHitPoint(100);
	this->setEnergyPoint(50);
	this->setDamagePoint(20);
	std::cout << "[ScavTrap] " << name << " constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "[ScavTrap] " << this->getName() << " destructor callled" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->getEnergyPoint() > 0 && this->getHitPoint() > 0)
	{
		std::cout << "[ScavTrap] " << this->getName() << " attacks " << target << " causing " 
		<< this->getDamagePoint() << " point of damage " << std::endl;
		this->setEnergyPoint(this->getEnergyPoint() - 1);
	}
	else if (this->getDamagePoint() > 0)
		std::cout << "[ScavTrap] " << this->getName() << " don't have enough energy " << std::endl;
	else
		std::cout << "[ScavTrap] " << this->getName() << " is dead " << std::endl;
}

void ScavTrap::guardGate()
{
	if (this->getDamagePoint() <= 0)
		std::cout << "[ScavTrap] " << this->getName() << " is dead " << std::endl;
	else if (this->getEnergyPoint() <= 0)
	{
		this->setEnergyPoint(this->getEnergyPoint() - 1);
		std::cout << "[ScavTrap] " << this->getName() << " don't have enough energy " << std::endl;
	}
	else
		std::cout << "[ScavTrap] " << this->getName() << " entered to Gate Keeper mode " << std::endl;
}