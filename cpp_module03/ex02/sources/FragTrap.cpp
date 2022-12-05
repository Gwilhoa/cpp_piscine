/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 21:43:31 by gchatain          #+#    #+#             */
/*   Updated: 2022/12/05 17:06:17 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->_hitPoint = 100;
	this->_energyPoint = 100;
	this->_damage = 30;
	std::cout << "[FragTrap] default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoint = 100;
	this->_energyPoint = 100;
	this->_damage = 30;
	std::cout << "[FragTrap] " << name << " constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "[FragTrap] " << this->_name << " destructor callled" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "[FragTrap] " << this->_name << " wznts a highFive" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap & fragtrap)
{
	this->_damage = fragtrap._damage;
	this->_energyPoint = fragtrap._energyPoint;
	this->_hitPoint = fragtrap._hitPoint;
	this->_name = fragtrap._name;
	return (*this);
}