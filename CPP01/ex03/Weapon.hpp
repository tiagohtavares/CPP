/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:09:10 by ttavares          #+#    #+#             */
/*   Updated: 2023/09/22 11:26:54 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <string>
#include <iostream>

class Weapon
{
	public:
		Weapon(std::string type);
		~Weapon();
		std::string getType();
		void setType(std::string newType);
	private:
		std::string type;
};

#endif
