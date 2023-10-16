/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:45:16 by ttavares          #+#    #+#             */
/*   Updated: 2023/10/16 14:45:31 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
#include <iostream>

class Cure : public AMateria
{
	protected:
		std::string type;
	public:
		Cure();
		~Cure();
		Cure(std::string const & type);
		Cure &operator=(const Cure& cpy);
		AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif
