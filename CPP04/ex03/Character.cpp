/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:14:56 by ttavares          #+#    #+#             */
/*   Updated: 2023/10/18 14:17:44 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	this->name = "Default";
	for(int i = 0;i < 4; i++)
	{
		this->inventory[i] = NULL;
	}
	std::cout << "Character Default constructor called" << std::endl;
}

Character::~Character()
{
	std::cout << "Character Destructor called" << std::endl;
}

Character::Character(std::string const &newname)
{
	for(int i = 0;i < 4; i++)
	{
		this->inventory[i] = NULL;
	}
	this->name = newname;
}

Character::Character(const Character& cpy)
{
	this->name = cpy.name;
	std::cout << "Character Copy constructor called" << std::endl;
}

Character &Character::operator=(const Character& cpy)
{
	if (this != &cpy)
	{
		this->name = cpy.name;
		std::cout << "Character Operator assignment copy called" << std::endl;
	}
	return *this;
}

std::string const& Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria* m)
{
	for(int i = 0;i < 4; i++)
	{
		if(!this->inventory[i])
		{
			this->inventory[i] = m;
			return;
		}
	}
	return;
}

void Character::unequip(int idx)
{
	this->inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter & target)
{
	if(inventory[idx])
		inventory[idx]->use(target);
	else
		std::cout << "No materia!" << std::endl;
}
