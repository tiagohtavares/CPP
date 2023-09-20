/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:45:18 by ttavares          #+#    #+#             */
/*   Updated: 2023/09/20 15:15:06 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde (int N, std::string name)
{
	Zombie *zombies = new Zombie[N];
	int i = 0;
	while(i < N)
	{
		zombies[i].set(name);
		zombies[i].announce();
		i++;
	}
	return zombies;
}
