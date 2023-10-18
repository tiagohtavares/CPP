/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:06:52 by ttavares          #+#    #+#             */
/*   Updated: 2023/10/18 15:15:53 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for(int i = 0;i < 4; i++)
	{
		this->materias[i] = NULL;
	}
	std::cout << "MateriaSource Default constructor called" << std::endl;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource Destructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& cpy)
{
	std::cout << "MateriaSource Copy constructor called" << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource& cpy)
{
	if (this != &cpy)
	{
		std::cout << "MateriaSource Operator assignment copy called" << std::endl;
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* materia)
{
	for(int i = 0;i < 4; i++)
	{
		if(!this->materias[i])
			this->materia[i] = materia;
	}
}

void MateriaSource::createMateria(std::string const& type)
{
	for(int i = 0;i < 4; i++)
	{
		if(!this->materias[i])
			if(this->materias[i].getName() == type)
	}
}
