/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:22:23 by ttavares          #+#    #+#             */
/*   Updated: 2023/10/16 12:13:30 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
#include <iostream>

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public virtual ScavTrap, public virtual FragTrap
{
	protected:
		std::string _name;
	public:
		DiamondTrap();
		DiamondTrap(const std::string name);
		~DiamondTrap();
		DiamondTrap(const DiamondTrap& cpy );
		DiamondTrap &operator=(const DiamondTrap& cpy);
		using ScavTrap::attack;
		void printStats();
		void whoAmi();
} ;

#endif
