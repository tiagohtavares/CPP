/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:16:21 by ttavares          #+#    #+#             */
/*   Updated: 2023/10/16 11:18:34 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap A("Sara");
	ClapTrap B(A);
	ClapTrap C("Ana");
	B = C;
	A.attack("Boar");
	B.attack("Boar");
	C.attack("Boar");
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;


	ScavTrap Test1("Rufus");
	ScavTrap Test4(Test1);
	ScavTrap Test3("Tom");
	Test4 = Test1;
	for(int i = 0;i < 5; i++)
	{
		Test1.attack("Boar");
	}
	Test1.takeDamage(9);
	Test1 = Test4;
	for(int i = 0;i < 10; i++)
	{
		Test1.beRepaired(1);
	}
	Test1.guardGate();

	return 0;
}
