/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 19:14:04 by gchatain          #+#    #+#             */
/*   Updated: 2022/12/06 20:54:39 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public :
		Dog();
		Dog(const Dog &c);
		~Dog();
		Dog & operator=(const Dog &c);
		void makeSound() const;
	private :
		Brain *_brain;
};
