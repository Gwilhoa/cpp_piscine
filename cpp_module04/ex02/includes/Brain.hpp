/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 20:52:15 by gchatain          #+#    #+#             */
/*   Updated: 2022/12/06 20:54:05 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#ifndef BRAIN_HPP
# define BRAIN_HPP
class Brain
{
	public :
		Brain();
		Brain(const Brain &c);
		~Brain();
		Brain & operator=(const Brain &c);
	private :
		std::string ideas[100];
};
#endif