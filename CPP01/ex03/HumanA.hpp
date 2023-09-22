/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:48:49 by ttavares          #+#    #+#             */
/*   Updated: 2023/09/22 12:25:16 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string name, Weapon& Weapon);
		~HumanA();
		void attack(void);
	private:
		std::string _name;
		Weapon& _weapon;
};

#endif
