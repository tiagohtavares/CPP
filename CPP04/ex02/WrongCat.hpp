/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:55:03 by ttavares          #+#    #+#             */
/*   Updated: 2023/10/09 13:04:45 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongCAT_HPP
# define WrongCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:
	public:
		WrongCat();
		~WrongCat();
		WrongCat(const WrongCat& cpy);
		WrongCat& operator=(const WrongCat& cpy);
		void makeSound() const;
} ;

#endif
