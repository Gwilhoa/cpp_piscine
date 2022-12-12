/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 19:14:01 by gchatain          #+#    #+#             */
/*   Updated: 2022/12/06 20:27:38 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class Cat : public Animal
{
	public :
		Cat();
		Cat(const Cat &c);
		~Cat();
		Cat & operator=(const Cat &c);
		void makeSound() const;
};
