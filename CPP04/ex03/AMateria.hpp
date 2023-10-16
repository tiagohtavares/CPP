/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:31:45 by ttavares          #+#    #+#             */
/*   Updated: 2023/10/16 14:37:09 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AMATERIA_HPP
# define AMATERIA_HPP
#include <iostream>

class AMateria
{
	protected:

	public:
		AMateria();
		~AMateria();
		AMateria(std::string const & type);
		AMateria &operator=(const AMateria& cpy);
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
