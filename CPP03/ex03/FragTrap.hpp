/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:55:03 by ttavares          #+#    #+#             */
/*   Updated: 2023/10/16 12:01:40 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
	protected:
		static int const HP = 100;
		static int const STM = 100;
		static int const ATK = 30;
	public:
		FragTrap();
		~FragTrap();
		FragTrap(const std::string& _name);
		FragTrap(const FragTrap& cpy);
		FragTrap& operator=(const FragTrap& cpy);
		void attack(const std::string& cpy);
		void highFivesGuys(void);
} ;

#endif
