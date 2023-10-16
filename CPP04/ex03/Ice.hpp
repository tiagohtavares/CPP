/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:39:49 by ttavares          #+#    #+#             */
/*   Updated: 2023/10/16 14:45:06 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
#include <iostream>

class Ice : public AMateria
{
	protected:
		std::string type;
	public:
		Ice();
		~Ice();
		Ice(std::string const & type);
		Ice &operator=(const Ice& cpy);
		AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif
