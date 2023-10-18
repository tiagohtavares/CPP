/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:37:40 by ttavares          #+#    #+#             */
/*   Updated: 2023/10/18 14:32:14 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"

int main()
{
	Cure *test0 = new Cure();
	Ice *test1 = new Ice();
	Ice *test2 = new Ice();
	Ice *test3 = new Ice();
	Ice *test4 = new Ice();
	if (!test0 && !test1)
		return 0;
	Character jeff("Jeff");
	Character tom("Tom");
	jeff.use(0, tom);
	jeff.equip(test0);
	jeff.equip(test1);
	jeff.equip(test2);
	jeff.equip(test3);
	jeff.equip(test4);
	jeff.use(0, tom);
	jeff.use(1, tom);
	jeff.unequip(0);
	jeff.unequip(1);
	jeff.unequip(2);
	jeff.unequip(3);
	jeff.use(3, jeff);
	return 0;
}
