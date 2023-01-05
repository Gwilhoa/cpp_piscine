/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 19:19:59 by gchatain          #+#    #+#             */
/*   Updated: 2023/01/05 15:52:31 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
class WrongAnimal
{
	public :
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal &c);
		virtual ~WrongAnimal();
		WrongAnimal & operator=(const WrongAnimal &c);
		std::string getType() const;
		virtual void makeSound() const = 0;
	protected :
		std::string _type;
};
#endif