/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:31:57 by ttavares          #+#    #+#             */
/*   Updated: 2024/02/14 11:31:03 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{
	std::cout << "Base destructor called!" << std::endl;
}

Base* generate()
{
	int randNum = std::rand() % 3;
	switch (randNum)
	{
		case 0:
			std::cout << "Generated A" << std::endl;
			return new A();
		case 1:
			std::cout << "Generated B" << std::endl;
			return new B();
		case 2:
			std::cout << "Generated C" << std::endl;
			return new C();
		default:
			return NULL;
	}
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
	{
		std::cout << "Type: A\n";
	}
	else if (dynamic_cast<B*>(p))
	{
		std::cout << "Type: B\n";
	}
	else if (dynamic_cast<C*>(p))
	{
		std::cout << "Type: C\n";
	}
	else
		std::cout << "Error : Not Found" << std::endl;
}

void identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "Type: A\n";
		return ;
	}
	catch (std::exception&){}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "Type: B\n";
		return ;
	}
	catch (std::exception&){}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "Type: C\n";
		return ;
	}
	catch (std::exception&)
	{
		std::cout << "Error : Not Found" << std::endl;
	}
}
