/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:23:52 by ttavares          #+#    #+#             */
/*   Updated: 2023/10/06 11:13:00 by ttavares         ###   ########.fr       */
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
	this->fixed = val << this->fractional;
	std::cout << "Test";
}

Fixed::Fixed(const float val)
{
	this->fixed = (val * (1 << this->fractional));
}

int Fixed::toInt(void) const
{
	int scaling = 1 << this->fractional;
	return this->fixed / scaling;
}

float Fixed::toFloat(void) const
{
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

bool Fixed::operator>(const Fixed& t)
{
	if(this->fixed > t.fixed)
		return true;
	return false;
}

bool Fixed::operator<(const Fixed& t)
{
	if(this->fixed < t.fixed)
		return true;
	return false;
}

bool Fixed::operator>=(const Fixed& t)
{
	if(this->fixed >= t.fixed)
		return true;
	return false;
}

bool Fixed::operator<=(const Fixed& t)
{
	if(this->fixed <= t.fixed)
		return true;
	return false;
}

bool Fixed::operator==(const Fixed& t)
{
	if(this->fixed == t.fixed)
		return true;
	return false;
}

bool Fixed::operator!=(const Fixed& t)
{
	if(this->fixed != t.fixed)
		return true;
	return false;
}

Fixed Fixed::operator+(const Fixed& t)
{
	return Fixed(this->fixed + t.fixed);
}

Fixed Fixed::operator-(const Fixed& t)
{
	return Fixed(this->fixed - t.fixed);
}

Fixed Fixed::operator*(const Fixed& t)
{
	return Fixed(this->fixed * t.fixed);
}

Fixed Fixed::operator/(const Fixed& t)
{
	return Fixed(this->fixed / t.fixed);
}

Fixed& Fixed::operator++(void)
{
	this->fixed += 1;
	return (*this);
}

Fixed& Fixed::operator--(void)
{
	this->fixed -= 1;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp;
	temp = *this;
	this->fixed += 1;
	return (temp);
}

Fixed Fixed::operator--(int)
{
	Fixed temp;
	temp = *this;
	this->fixed -= 1;
	return (temp);
}

int Fixed::getRawBits(void) const
{
	return this->fixed;
}

void Fixed::setRawBits(int const raw)
{
	this->fixed = raw;
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if(a.getRawBits() > b.getRawBits())
		return b;
	else
		return a;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if(a.getRawBits() > b.getRawBits())
		return b;
	else
		return a;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if(a.getRawBits() > b.getRawBits())
		return a;
	else
		return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if(a.getRawBits() > b.getRawBits())
		return a;
	else
		return b;
}
