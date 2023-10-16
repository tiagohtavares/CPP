/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:55:03 by ttavares          #+#    #+#             */
/*   Updated: 2023/10/16 12:31:55 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *_brain;
	public:
		Dog();
		virtual ~Dog();
		Dog(const Dog& cpy);
		Dog& operator=(const Dog& cpy);
		void makeSound() const;
		Brain *getBrain();
} ;

#endif
