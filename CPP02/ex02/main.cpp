/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:16:21 by ttavares          #+#    #+#             */
/*   Updated: 2023/10/06 10:16:31 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	Fixed a;
	Fixed b(3.542f);
	Fixed c(b);
	Fixed d(0);
	a = Fixed(100);

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	if (a > b)
		std::cout << "A > B" << std::endl;
	if (a < b)
		std::cout << "A < B" << std::endl;
	if (a >= b)
		std::cout << "A >= B" << std::endl;
	if (a <= b)
		std::cout << "A <= B" << std::endl;
	if (a == b)
		std::cout << "A == B" << std::endl;
	if (a != b)
		std::cout << "A != B" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;


	std::cout << "A = "<< a.toInt() << std::endl;
	std::cout << "B = "<< b.toInt() << std::endl;
	std::cout << "C = "<< c.toInt() << std::endl;
	std::cout << "A = "<< a.toFloat() << std::endl;
	std::cout << "B = "<< b.toFloat() << std::endl;
	std::cout << "C = "<< c.toFloat() << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;


	std::cout << "Testing << overload!" << std::endl;
	std::cout << "A = "<< a << std::endl;
	std::cout << "B = "<< b << std::endl;
	std::cout << "C = "<< c << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "Fixed A:"<< a.getRawBits() << std::endl;
	std::cout << "Fixed b:"<< b.getRawBits() << std::endl;
	std::cout << "a + b = "<< a + b << std::endl;

	std::cout << "Fixed A:"<< a.getRawBits() << std::endl;
	std::cout << "Fixed b:"<< b.getRawBits() << std::endl;
	std::cout << "a - b = "<< a - b << std::endl;

	std::cout << "Fixed A:"<< a.getRawBits() << std::endl;
	std::cout << "Fixed b:"<< b.getRawBits() << std::endl;
	std::cout << "a * b = "<< a * b << std::endl;

	std::cout << "Fixed A:"<< a.getRawBits() << std::endl;
	std::cout << "Fixed b:"<< b.getRawBits() << std::endl;
	std::cout << "a / b = "<< a / b << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "A++ = "<< a++ << std::endl;
	std::cout << "B-- = "<< b-- << std::endl;
	std::cout << "A = "<< a << std::endl;
	std::cout << "B = "<< b << std::endl;
	std::cout << "++A = "<< ++a << std::endl;
	std::cout << "--B = "<< --b << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	Fixed const z(10);
	Fixed const x(15);
	std::cout << "A:"<< a << std::endl;
	std::cout << "B:"<< b << std::endl;
	std::cout << "Min: "<< Fixed::min(a,b) << std::endl;
	std::cout << "Z:"<< z << std::endl;
	std::cout << "X:"<< x << std::endl;
	std::cout << "Min: "<< Fixed::min(z,x) << std::endl;
	std::cout << "A:"<< a << std::endl;
	std::cout << "B:"<< b << std::endl;
	std::cout << "Max: "<< Fixed::max(a,b) << std::endl;
	std::cout << "Z:"<< z << std::endl;
	std::cout << "X:"<< x << std::endl;
	std::cout << "Max: "<< Fixed::max(z,x) << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	return 0;
}
