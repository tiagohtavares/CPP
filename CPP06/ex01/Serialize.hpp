/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:32:25 by ttavares          #+#    #+#             */
/*   Updated: 2024/02/14 11:29:29 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

#include <iostream>
#include <stdint.h>
#include "data.hpp"

class Serialize
{
	private:
		Serialize();
		~Serialize();
		Serialize(const Serialize& cpy );
		Serialize &operator=(const Serialize& cpy);
	public:
		static uintptr_t serialize(data* ptr);
		static data* deserialize(uintptr_t raw);
};

#endif
