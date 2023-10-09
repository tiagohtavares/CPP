/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:23:24 by ttavares          #+#    #+#             */
/*   Updated: 2023/10/09 11:37:16 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : _name("Default")
{
	this->_HP = 10;
	this->_STM = 10;
	this->_ATK = 0;
	std::cout << "Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string& _name) : ClapTrap(_name)
{
	_HP = 100;
	_STM = 50;
	_ATK = 20;
	 std::cout << "ScavTrap " << _name << " is born!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap is destroyed!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& cpy) : ClapTrap(cpy)
{
	this->_name = cpy._name;
	this->_ATK = cpy._ATK;
	this->_HP = cpy._HP;
	this->_STM = cpy._STM;
	std::cout << "Scavtrap " << _name << " is copied!" << std::endl;

}

ScavTrap& ScavTrap::operator=(const ScavTrap& cpy)
{
	if (this != &cpy)
	{
		this->_name = cpy._name;
		this->_ATK = cpy._ATK;
		this->_HP = cpy._HP;
		this->_STM = cpy._STM;
		std::cout << "Assignment operator ScavTrap " << _name << " is called!" << std::endl;
	}
	return *this;
}

void ScavTrap::attack(const std::string& target)
{
	if(this->_STM > 0 && this->_HP > 0)
		std::cout << "ScavTrap " << this->_name << " attacks "<< target << ", causing " << _ATK << " points of damage!" << std::endl;
	else
		std::cout << "ScavTrap " << this->_name << " cant attack!" << std::endl;
	this->_STM = this->_STM - 1;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is guarding the gatez!" << std::endl;
}
