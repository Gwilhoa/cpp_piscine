/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:22:37 by gchatain          #+#    #+#             */
/*   Updated: 2022/11/29 18:19:29 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


class Fixed
{
private:
	int					_value;
	const static int	_bits = 8;
public:
	//constructor//
	Fixed();
	Fixed(const Fixed &);
	~Fixed();
	//getterandsetter//
	int		getRawBits();
	void	setRawBits(int nbr);
};
