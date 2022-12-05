/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 21:43:31 by gchatain          #+#    #+#             */
/*   Updated: 2022/12/05 17:08:57 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->_damage = 20;
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	std::cout << "[ScavTrap] default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_damage = 20;
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	std::cout << "[ScavTrap] " << name << " constructor called" << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap & scavtrap)
{
	this->_damage = scavtrap._damage;
	this->_energyPoint = scavtrap._energyPoint;
	this->_hitPoint = scavtrap._hitPoint;
	this->_name = scavtrap._name;
	return (*this);
}

ScavTrap::ScavTrap(const ScavTrap & scavtrap)
{
	*this = scavtrap;
}

ScavTrap::~ScavTrap()
{
	std::cout << "[ScavTrap] " << this->_name << " destructor callled" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_energyPoint > 0 && this->_hitPoint > 0)
	{
		std::cout << "[ScavTrap] " << this->_name << " attacks " << target << " causing " 
		<< this->_damage << " point of damage " << std::endl;
		this->_energyPoint--;
	}
	else if (this->_damage > 0)
		std::cout << "[ScavTrap] " << this->_name << " don't have enough energy " << std::endl;
	else
		std::cout << "[ScavTrap] " << this->_name << " is dead " << std::endl;
}

void ScavTrap::guardGate()
{
	if (this->_damage <= 0)
		std::cout << "[ScavTrap] " << this->_name << " is dead " << std::endl;
	else if (this->_energyPoint <= 0)
	{
		this->_energyPoint--;
		std::cout << "[ScavTrap] " << this->_name << " don't have enough energy " << std::endl;
	}
	else
		std::cout << "[ScavTrap] " << this->_name << " entered to Gate Keeper mode " << std::endl;
}