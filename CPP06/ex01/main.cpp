/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:49:44 by ttavares          #+#    #+#             */
/*   Updated: 2024/02/14 11:38:53 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"
#include <iostream>

int	main (void)
{
	data test ={"Testing data on the database of data storing all datas on every database in the database available", 42};
	std::cout << test.string << std::endl;
	std::cout << test.num << std::endl;
	std::cout << "Data adress : " << &test << std::endl;

	uintptr_t ptr = Serialize::serialize(&test);
	std::cout << "Serialized address: " << &ptr << std::endl;

	data *test2 = Serialize::deserialize(ptr);
	std::cout << test.string << std::endl;
	std::cout << test.num << std::endl;
	std::cout << "Data adress : " << test2 << std::endl;
	std::cout << "Deserialized : " << Serialize::deserialize(ptr) << std::endl;
}
