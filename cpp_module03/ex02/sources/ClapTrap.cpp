/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 19:21:35 by gchatain          #+#    #+#             */
/*   Updated: 2022/12/05 01:13:38 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _Name("NaN"), _HitPoint(10), _EnergyPoint(10), _Damage(0)
{
	std::cout << "[ClapTrap] default constructor called " << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _Name(name), _HitPoint(10), _EnergyPoint(10), _Damage(0)
{
	std::cout << "[ClapTrap] "<< name << " constructor called " << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap)
{
	*this = claptrap;
}

ClapTrap::~ClapTrap()
{
	std::cout << "[ClapTrap] "<< this->_Name << " disappears " << std::endl;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &claptrap)
{
	this->_Damage = claptrap.getDamagePoint();
	this->_EnergyPoint = claptrap.getEnergyPoint();
	this->_HitPoint = claptrap.getHitPoint();
	this->_Name = claptrap.getName();
	return (*this);
}


std::string	ClapTrap::getName() const
{
	return (this->_Name);
}

int		ClapTrap::getHitPoint() const
{
	return (this->_HitPoint);
}

int		ClapTrap::getEnergyPoint() const
{
	return (this->_EnergyPoint);
}

int		ClapTrap::getDamagePoint() const
{
	return (this->_Damage);
}

void	ClapTrap::setDamagePoint(int amount)
{
	this->_Damage = amount;
}

void	ClapTrap::setEnergyPoint(int amount)
{
	this->_EnergyPoint = amount;
}

void	ClapTrap::setHitPoint(int amount)
{
	this->_HitPoint = amount;
}

void	ClapTrap::setName(std::string name)
{
	this->_Name = name;
}



void	ClapTrap::attack(const std::string& target)
{
	if (this->_EnergyPoint > 0 && this->_HitPoint > 0)
	{
		std::cout << "[ClapTrap] " << this->_Name << " attacks " << target << " causing " 
		<< this->_Damage << " point of damage " << std::endl;
		this->_EnergyPoint--;
	}
	else if (this->_HitPoint > 0)
		std::cout << "[ClapTrap] " << this->_Name << " don't have enough energy " << std::endl;
	else
		std::cout << "[ClapTrap] " << this->_Name << " is dead " << std::endl;

}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_HitPoint <= 0)
		std::cout << "[ClapTrap] " << this->_Name << " is already dead " << std::endl;
	else
	{
		this->_HitPoint = this->_HitPoint - amount;
		if (this->_HitPoint <= 0)
			std::cout << "[ClapTrap] " << this->_Name << " takes " << amount << "point of damage\n"
			<< this->_Name << " dies " << std::endl;
		else
			std::cout << "[ClapTrap] " << this->_Name << " takes " << amount << "point of damage\n"
			<< this->_HitPoint << " left " << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_EnergyPoint > 0 && this->_HitPoint > 0)
	{
		this->_HitPoint = this->_HitPoint + amount;
		this->_EnergyPoint--;
		std::cout << "[ClapTrap] " << this->_Name << " heals "<< amount << "\n" 
		<< this->_HitPoint << " left " << std::endl;
	}
	else if (this->_HitPoint > 0)
		std::cout << "[ClapTrap] " << this->_Name << " don't have enough energy " << std::endl;
	else
		std::cout << "[ClapTrap] " << this->_Name << " is dead " << std::endl;
}
