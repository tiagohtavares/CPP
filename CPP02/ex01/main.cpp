/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:16:21 by ttavares          #+#    #+#             */
/*   Updated: 2023/10/03 12:17:33 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed b(3.542f);
	Fixed c(b);
	a = Fixed(100);
	std::cout << "A "<< a.toInt() << std::endl;
	std::cout << "B "<< b.toInt() << std::endl;
	std::cout << "C "<< c.toInt() << std::endl;
	std::cout << "A "<< a.toFloat() << std::endl;
	std::cout << "B "<< b.toFloat() << std::endl;
	std::cout << "C "<< c.toFloat() << std::endl;
	std::cout << "Testing << overload!" << std::endl;
	std::cout << "A "<< a << std::endl;
	std::cout << "B "<< b << std::endl;
	std::cout << "C "<< c << std::endl;
	return 0;
}
