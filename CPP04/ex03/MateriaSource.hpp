/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:05:30 by ttavares          #+#    #+#             */
/*   Updated: 2023/10/18 15:10:22 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *materias[4];
		
	public:
		MateriaSource();
		virtual ~MateriaSource();
		MateriaSource(const MateriaSource& cpy );
		MateriaSource &operator=(const MateriaSource& cpy);
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};
