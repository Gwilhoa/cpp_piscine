/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 20:11:07 by gchatain          #+#    #+#             */
/*   Updated: 2023/01/05 15:54:38 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{

	Animal *list[100];
	for (int i = 0; i < 100; i++)
	{
		if (i % 2 == 0)
			list[i] = new Dog();
		else
			list[i] = new Cat();
	}
	for (int i = 0; i < 100; i++)
	{
		list[i]->makeSound();
	}
	for (int i = 0; i < 100; i++)
	{
		delete list[i];
	}
	const WrongAnimal* j = new WrongCat();
	std::cout << j->getType() << " " << std::endl;
	j->makeSound(); 
	delete j;
	 
return 0;
}