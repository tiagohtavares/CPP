/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FrapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:55:03 by ttavares          #+#    #+#             */
/*   Updated: 2023/10/09 11:35:38 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:
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
