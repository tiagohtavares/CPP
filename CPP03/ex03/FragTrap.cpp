/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:23:24 by ttavares          #+#    #+#             */
/*   Updated: 2023/10/16 11:59:48 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->_HP = this->HP;
	this->_STM = this->STM;
	this->_ATK = this->ATK;
	std::cout << "FragTrao is born" << std::endl;
}

FragTrap::FragTrap(const std::string& _name) : ClapTrap(_name)
{
	this->_HP = this->HP;
	this->_STM = this->STM;
	this->_ATK = this->ATK;
	 std::cout << "FragTrap " << _name << " is born!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap is destroyed!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& cpy) : ClapTrap(cpy)
{
	this->_name = cpy._name;
	this->_ATK = cpy._ATK;
	this->_HP = cpy._HP;
	this->_STM = cpy._STM;
	std::cout << "FragTrap " << _name << " is copied!" << std::endl;

}

FragTrap& FragTrap::operator=(const FragTrap& cpy)
{
	if (this != &cpy)
	{
		this->_name = cpy._name;
		this->_ATK = cpy._ATK;
		this->_HP = cpy._HP;
		this->_STM = cpy._STM;
		std::cout << "Assignment operator FragTrap " << _name << " is called!" << std::endl;
	}
	return *this;
}

void FragTrap::attack(const std::string& target)
{
	if(this->_STM > 0 && this->_HP > 0)
		std::cout << "FragTrap " << this->_name << " attacks "<< target << ", causing " << _ATK << " points of damage!" << std::endl;
	else
		std::cout << "FragTrap " << this->_name << " cant attack!" << std::endl;
	this->_STM = this->_STM - 1;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap is highfiving guys?" << std::endl;
}
