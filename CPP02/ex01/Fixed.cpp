/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:23:52 by ttavares          #+#    #+#             */
/*   Updated: 2023/09/25 15:37:53 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int val)
{
	std::cout << "Int Constructor called, val is : "<< val << std::endl;
	this->fixed = val << this->fractional;
	std::cout << "Value is " << this->fixed << std::endl;
}

Fixed::Fixed(const Fixed &c)
{
	std::cout << "Copy constructor called" << std::endl;
	this->fixed = c.fixed;
}

Fixed& Fixed::operator=(const Fixed& t)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixed = t.fixed;
	return *this;
}
int Fixed::getRawBits(void) const
{
	std::cout << "GetRawBits function called" << std::endl;
	return this->fixed;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "SetRawBits function called" << std::endl;
	this->fixed = raw;
}
