/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 20:11:07 by gchatain          #+#    #+#             */
/*   Updated: 2023/01/04 16:50:24 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
int main()
{
	//const Animal* meta = new Animal();
	//const WrongAnimal* wrong = new WrongAnimal();
	
	const WrongAnimal* wrong = new WrongCat();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << wrong->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	wrong->makeSound();
	i->makeSound();
	j->makeSound();
	delete j;
	delete i;
	delete wrong;
return 0;
}