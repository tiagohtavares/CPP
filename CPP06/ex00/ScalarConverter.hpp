/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:32:25 by ttavares          #+#    #+#             */
/*   Updated: 2024/01/29 12:56:46 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
#include <iostream>
#include <iomanip>
#include <limits>
#include <cstdlib>

class ScalarConverter
{
	private:
		ScalarConverter();
		~ScalarConverter();
		ScalarConverter(const ScalarConverter& cpy );
		ScalarConverter &operator=(const ScalarConverter& cpy);
	public:
		static bool charOverflow(const std::string& input);
		static bool intOverflow(const std::string& input);
		static bool floatOverflow(const std::string& input);
		static bool doubleOverflow(const std::string& input);

		static void printChar(char c, const std::string& input);
		static void printInt(int num, const std::string& input);
		static void printFloat(float num, const std::string& input);
		static void printDouble(double num, const std::string& input);

		static void printOutput(long double number, const std::string& input);

		static bool isChar(const std::string& input);
		static bool isInt(const std::string& input);
		static bool isFloat(const std::string& input);
		static bool isDouble(const std::string& input);

		static void convert(const std::string& input);
};

#endif
