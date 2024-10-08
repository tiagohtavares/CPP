/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:18:57 by ttavares          #+#    #+#             */
/*   Updated: 2023/10/03 12:18:48 by ttavares         ###   ########.fr       */
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
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);
#endif
