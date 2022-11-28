/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:54:28 by gchatain          #+#    #+#             */
/*   Updated: 2022/11/28 18:43:44 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string &name)
{
	this->_name = name;
	std::cout << "Zombie "<< this->_name << " created" <<std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie "<< this->_name << " destroyed" << std::endl;
}

void Zombie::announce() const
{
	std::cout << this->_name <<": BraiiiiiiinnnzzzZ..." << std::endl;
}