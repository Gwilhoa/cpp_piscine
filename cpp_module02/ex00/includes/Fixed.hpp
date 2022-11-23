/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:22:37 by gchatain          #+#    #+#             */
/*   Updated: 2022/11/23 16:04:04 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


class Fixed
{
private:
	int			nb;
	const static int	bit = 8;
public:
	//constructor//
	Fixed();
	Fixed(const Fixed &);
	~Fixed();
	//operator//
	Fixed &Fixed::operator=(const Fixed &fixed);
	//getterandsetter//
	int		getRawBits();
	void	setRawBits(int nbr);
};
