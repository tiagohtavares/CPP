/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:23:52 by ttavares          #+#    #+#             */
/*   Updated: 2023/10/03 12:15:25 by ttavares         ###   ########.fr       */
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

Fixed::Fixed(const float val)
{
	std::cout << "Float Constructor called, val is : "<< val << std::endl;
	this->fixed = (val * (1 << this->fractional));
	std::cout << "Value is " << this->fixed << std::endl;
}

int Fixed::toInt(void) const
{
	std::cout << "Converting fixed "<< this->fixed <<" to int" << std::endl;
	int scaling = 1 << this->fractional;
	return this->fixed / scaling;
}

float Fixed::toFloat(void) const
{
	std::cout << "Converting fixed "<< this->fixed <<" to float" << std::endl;
	int scaling = 1 << this->fractional;
	return (static_cast<float>(this->fixed) / static_cast<float>(scaling));
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

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return (os);
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
