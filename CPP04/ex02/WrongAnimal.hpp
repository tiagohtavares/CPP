/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:36:37 by ttavares          #+#    #+#             */
/*   Updated: 2023/10/09 13:05:27 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal
{
	protected:
		std::string _type;
	public:
		WrongAnimal();
		WrongAnimal(std::string name);
		virtual ~WrongAnimal();
		WrongAnimal(const WrongAnimal& cpy );
		WrongAnimal &operator=(const WrongAnimal& cpy);
		void makeSound() const;
		std::string getType() const;
} ;

#endif
