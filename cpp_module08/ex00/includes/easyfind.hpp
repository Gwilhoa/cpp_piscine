/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 12:23:11 by gchatain          #+#    #+#             */
/*   Updated: 2022/12/29 12:43:29 by gchatain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
#include <iostream>
template <typename T>
typename T::iterator easyfind(T &container, int n)
{
	class ValueNotFound : public std::exception
	{
		virtual const char* what() const throw()
		{
			return "Value not found";
		}
	};
	typename T::iterator it = std::find(container.begin(), container.end(), n);
	if (it == container.end())
		throw ValueNotFound();
	return it;
}


#endif