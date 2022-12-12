/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchatain <gchatain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 22:16:10 by gchatain          #+#    #+#             */
/*   Updated: 2022/12/12 22:29:53 by gchatain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate()
{
	int i = rand() % 3;
	if (i == 0)
		return new A;
	else if (i == 1)
		return new B;
	else
		return new C;
}

void	identify(Base &p)
{
	try
	{
		A a = dynamic_cast<A&>(p);
		std::cout << "Type is A" << std::endl;
		return;
	}
	catch (std::exception &e)
	{
		(void)e;
	}
	try
	{
		B b = dynamic_cast<B&>(p);
		std::cout << "Type is B" << std::endl;
		return;
	}
	catch (std::exception &e)
	{
		(void)e;
	}
	try
	{
		C c = dynamic_cast<C&>(p);
		std::cout << "Type is C" << std::endl;
		return;
	}
	catch (std::exception &e)
	{
		(void)e;
	}
}

void	identify(Base *p)
{
	try
	{
		A a = dynamic_cast<A&>(*p);
		std::cout << "Type is A" << std::endl;
		return;
	}
	catch (std::exception &e)
	{
		(void)e;
	}
	try
	{
		B b = dynamic_cast<B&>(*p);
		std::cout << "Type is B" << std::endl;
		return;
	}
	catch (std::exception &e)
	{
		(void)e;
	}
	try
	{
		C c = dynamic_cast<C&>(*p);
		std::cout << "Type is C" << std::endl;
		return;
	}
	catch (std::exception &e)
	{
		(void)e;
	}
}

int main(void)
{
	srand(time(0));
	identify(generate());
	identify(*generate());
	return 0;
}