/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 20:47:48 by gchatain          #+#    #+#             */
/*   Updated: 2022/11/23 14:02:32 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void){
	std::cout << "Harl created" << std::endl;
}

Harl::~Harl(void){
	std::cout << "Harl destroyed" << std::endl;
}

void	Harl::debug(void)
{
	std::cout << "[DEBUG] my life is potato" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[INFO] hmmm a poisonous potato maybe" << std::endl;
}
void	Harl::warning(void)
{
	std::cout << "[WARN] im a poisonous potato, it's dangerous" << std::endl;
}
void	Harl::error(void)
{
	std::cout << "[ERROR] im a moldy potato im gonna die" << std::endl;
}


void	Harl::complain(std::string level)
{
	void	(Harl::*currentFunction)(void);
	void (Harl::*function[])() = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error,
	};
	std::string	levels[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	for (int i = 0; i < 4; i++)
	{
		currentFunction = function[i];
		if (level == levels[i])
			(this->*currentFunction)();
	}
}