/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:18:57 by ttavares          #+#    #+#             */
/*   Updated: 2023/10/06 11:13:14 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int fixed;
		static const int fractional = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const int val);
		Fixed(const float val);
		Fixed(const Fixed &c);

		float toFloat(void) const;
		int toInt(void) const;

		Fixed& operator=(const Fixed& t);
		bool operator>(const Fixed& t);
		bool operator<(const Fixed& t);
		bool operator>=(const Fixed& t);
		bool operator<=(const Fixed& t);
		bool operator==(const Fixed& t);
		bool operator!=(const Fixed& t);

		Fixed operator+(const Fixed& t);
		Fixed operator-(const Fixed& t);
		Fixed operator*(const Fixed& t);
		Fixed operator/(const Fixed& t);

		Fixed operator++(int);
		Fixed operator--(int);
		Fixed &operator++(void);
		Fixed &operator--(void);

		int getRawBits(void) const;
		void setRawBits(int const raw);

		static Fixed& min(Fixed& a, Fixed& b);
		static const Fixed& min(const Fixed& a, const Fixed& b);
		static Fixed& max(Fixed& a, Fixed& b);
		static const Fixed& max(const Fixed& a, const Fixed& b);
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);
#endif
