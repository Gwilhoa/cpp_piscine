/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:22:37 by gchatain          #+#    #+#             */
/*   Updated: 2022/11/30 09:57:02 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>


class Fixed
{
private:
	int			_value;
	const static int	_bits = 8;
public:
	Fixed();
	Fixed(const Fixed &fixed);
	Fixed(const int nbr);
	Fixed(const float nbr);
	~Fixed();
	//---//
	Fixed & operator=(const Fixed &fixed);
	Fixed & operator*(const Fixed &fixed);
	Fixed & operator/(const Fixed &fixed);
	Fixed & operator+(const int nbr);
	Fixed & operator++(void);
	Fixed & operator++(int nbr);
	//---//
	bool operator>(const Fixed &fixed) const;
	bool operator<(const Fixed &fixed) const;
	bool operator>=(const Fixed &fixed) const;
	bool operator<=(const Fixed &fixed) const;
	bool operator==(const Fixed &fixed) const;
	bool operator!=(const Fixed &fixed) const;
	//---//
	Fixed & max(const Fixed &fixed1, const Fixed &fixed2) const;
	Fixed & min(const Fixed &fixed1, const Fixed &fixed2);
	





	int				getRawBits() const;
	void			setRawBits(int const raw);
	float			toFloat(void) const;
	int				toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);