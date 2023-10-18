/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:39:49 by ttavares          #+#    #+#             */
/*   Updated: 2023/10/18 11:24:33 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		virtual ~Ice();
		Ice(const Ice& cpy );
		Ice &operator=(const Ice& cpy);
		AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif
