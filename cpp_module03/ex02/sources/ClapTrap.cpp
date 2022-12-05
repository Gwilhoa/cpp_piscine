/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 19:21:35 by gchatain          #+#    #+#             */
/*   Updated: 2022/12/05 17:08:57 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("NaN"), _hitPoint(10), _energyPoint(10), _damage(0)
{
	std::cout << "[ClapTrap] default constructor called " << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoint(10), _energyPoint(10), _damage(0)
{
	std::cout << "[ClapTrap] "<< name << " constructor called " << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap)
{
	*this = claptrap;
}

ClapTrap::~ClapTrap()
{
	std::cout << "[ClapTrap] "<< this->_name << " disappears " << std::endl;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &claptrap)
{
	this->_damage = claptrap._damage;
	this->_energyPoint = claptrap._energyPoint;
	this->_hitPoint = claptrap._hitPoint;
	this->_name = claptrap._name;
	return (*this);
}




void	ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoint > 0 && this->_hitPoint > 0)
	{
		std::cout << "[ClapTrap] " << this->_name << " attacks " << target << " causing " 
		<< this->_damage << " point of damage " << std::endl;
		this->_energyPoint--;
	}
	else if (this->_hitPoint > 0)
		std::cout << "[ClapTrap] " << this->_name << " don't have enough energy " << std::endl;
	else
		std::cout << "[ClapTrap] " << this->_name << " is dead " << std::endl;

}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoint <= 0)
		std::cout << "[ClapTrap] " << this->_name << " is already dead " << std::endl;
	else
	{
		this->_hitPoint = this->_hitPoint - amount;
		if (this->_hitPoint <= 0)
			std::cout << "[ClapTrap] " << this->_name << " takes " << amount << "point of damage\n"
			<< this->_name << " dies " << std::endl;
		else
			std::cout << "[ClapTrap] " << this->_name << " takes " << amount << "point of damage\n"
			<< this->_hitPoint << " left " << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoint > 0 && this->_hitPoint > 0)
	{
		this->_hitPoint = this->_hitPoint + amount;
		this->_energyPoint--;
		std::cout << "[ClapTrap] " << this->_name << " heals "<< amount << "\n" 
		<< this->_hitPoint << " left " << std::endl;
	}
	else if (this->_hitPoint > 0)
		std::cout << "[ClapTrap] " << this->_name << " don't have enough energy " << std::endl;
	else
		std::cout << "[ClapTrap] " << this->_name << " is dead " << std::endl;
}
