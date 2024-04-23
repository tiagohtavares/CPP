/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:49:44 by ttavares          #+#    #+#             */
/*   Updated: 2024/04/23 12:22:12 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main(void)
{
	std::srand(std::time(NULL));

	Base *test1 = generate();
	Base *test2 = generate();
	Base *test3 = generate();

	std::cout << std::endl;

	identify(test1);
	identify(test2);
	identify(test3);

	std::cout << std::endl;

	std::cout << "Equaling adress" << std::endl;

	Base &test4 = *test1;
	Base &test5 = *test2;
	Base &test6 = *test3;

	identify(test4);
	identify(test5);
	identify(test6);

	std::cout << std::endl;

	Base *test7 = NULL;
	Base test8;

	identify(test7);
	identify(test8);

	delete test1;
	delete test2;
	delete test3;
}
