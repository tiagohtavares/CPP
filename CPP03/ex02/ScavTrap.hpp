/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:55:03 by ttavares          #+#    #+#             */
/*   Updated: 2023/10/16 11:56:26 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
	private:
		static int const HP = 100;
		static int const STM = 50;
		static int const ATK = 20;
	public:
		ScavTrap();
		~ScavTrap();
		ScavTrap(const std::string& _name);
		ScavTrap(const ScavTrap& cpy);
		ScavTrap& operator=(const ScavTrap& cpy);
		void attack(const std::string& cpy);
		void guardGate();
} ;

#endif
