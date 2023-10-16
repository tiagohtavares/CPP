/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 12:36:37 by ttavares          #+#    #+#             */
/*   Updated: 2023/10/16 13:05:05 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <iostream>

class Animal
{
	protected:
		std::string _type;
	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal& cpy );
		Animal &operator=(const Animal& cpy);
		virtual void makeSound() const;
		std::string getType() const;
} ;

#endif
