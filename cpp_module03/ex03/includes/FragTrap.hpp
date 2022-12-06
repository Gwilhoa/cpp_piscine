/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 20:22:09 by gchatain          #+#    #+#             */
/*   Updated: 2022/12/06 14:52:13 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include "ClapTrap.hpp"
class FragTrap : virtual public ClapTrap
{

public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &fragTrap);
	~FragTrap();

	FragTrap & operator=(const FragTrap & Fragtrap);
	void highFivesGuys(void);
};
#endif