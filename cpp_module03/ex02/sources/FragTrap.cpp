/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 21:43:31 by gchatain          #+#    #+#             */
/*   Updated: 2022/12/05 14:14:22 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->setHitPoint(100);
	this->setEnergyPoint(100);
	this->setDamagePoint(30);
	std::cout << "[FragTrap] default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->setHitPoint(100);
	this->setEnergyPoint(100);
	this->setDamagePoint(30);
	std::cout << "[FragTrap] " << name << " constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "[FragTrap] " << this->getName() << " destructor callled" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "[FragTrap] " << this->getName() << " wznts a highFive" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap & fragtrap)
{
	this->setDamagePoint(fragtrap.getDamagePoint());
	this->setEnergyPoint(fragtrap.getEnergyPoint());
	this->setHitPoint(fragtrap.getHitPoint());
	this->setName(fragtrap.getName());
	return (*this);
}