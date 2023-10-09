/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:36:44 by ttavares          #+#    #+#             */
/*   Updated: 2023/10/09 11:14:29 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain is born!" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain is destroyed!" << std::endl;
}

Brain::Brain( const Brain& cpy)
{
	for(int i = 0; i < 100; i++)
	{
		this->ideas[i] = cpy.ideas[i];
	}
	std::cout << "Brain is copied!" << std::endl;
}

Brain &Brain::operator=(const Brain& cpy)
{
	if(this != &cpy)
	{
		for(int i = 0; i < 100; i++)
		{
			this->ideas[i] = cpy.ideas[i];
		}
		std::cout << "Assignement copy of Brain is called!" << std::endl;
	}
	return *this;
}
