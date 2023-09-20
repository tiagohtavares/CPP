/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:32:24 by ttavares          #+#    #+#             */
/*   Updated: 2023/09/20 14:40:36 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *zombie;

	std::string str;
	std::cout << "Name a zombie" << std::endl;
	std::cin >> str;

	randomChump(str);

	std::cout << "Another" << std::endl;
	std::cin >> str;
	zombie = newZombie(str);
	zombie->announce();
	delete zombie;
	return 0;
}
