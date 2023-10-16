/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:16:21 by ttavares          #+#    #+#             */
/*   Updated: 2023/10/16 11:01:13 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap Test1("Rufus");
	ClapTrap Test2("Jeff");
	ClapTrap Test3(Test1);
	Test1 = Test2;
	for(int i = 0;i < 5; i++)
	{
		Test1.attack("Boar");
	}
	Test1.takeDamage(9);
	for(int i = 0;i < 10; i++)
	{
		Test1.beRepaired(1);
	}
	Test2.takeDamage(20);
	Test2.attack("Seal");
	Test2.beRepaired(1);
	Test3.takeDamage(1);
	Test3 = Test2;
	Test3.takeDamage(1);
	return 0;
}
