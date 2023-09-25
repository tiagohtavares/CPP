/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:29:05 by ttavares          #+#    #+#             */
/*   Updated: 2023/09/25 13:02:33 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
	private :
		std::string name;
	public :
		Zombie(std::string str);
		~Zombie(void);
		void announce(void);
};

void randomChump(std::string name);
Zombie* newZombie(std::string name);
#endif
