/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:36:37 by ttavares          #+#    #+#             */
/*   Updated: 2023/10/09 11:15:02 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
	protected:
		std::string _name;
		int _HP;
		int	_ATK;
		int _STM;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap(const ClapTrap& cpy );
		ClapTrap &operator=(const ClapTrap& cpy);
		void attack(const std::string& target);
		void takeDamage(unsigned int ammount);
		void beRepaired(unsigned int ammount);
} ;

#endif
