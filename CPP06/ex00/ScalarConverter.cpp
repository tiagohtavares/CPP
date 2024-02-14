/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:31:57 by ttavares          #+#    #+#             */
/*   Updated: 2024/02/14 10:42:58 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << "ScalarConverter constructor called!" << std::endl;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "ScalarConverter destructor called!" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter& cpy)
{
	(void)cpy;
	std::cout << "Copy constructor operator called" << std::endl;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter& cpy)
{
	(void)cpy;
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

bool ScalarConverter::charOverflow(const std::string& input)
{
	long double temp;

	temp = std::strtold(input.c_str(), NULL);
	if (temp < std::numeric_limits<char>::min() || temp > std::numeric_limits<char>::max())
		return true;
	return false;
}

bool ScalarConverter::intOverflow(const std::string& input)
{
	long double temp;

	temp = std::strtold(input.c_str(), NULL);
	if (temp < std::numeric_limits<int>::min() || temp > std::numeric_limits<int>::max())
		return true;
	return false;
}

bool ScalarConverter::floatOverflow(const std::string& input)
{
	long double temp;

	temp = std::strtold(input.c_str(),NULL);
	if ( temp < -std::numeric_limits<float>::max() || temp > std::numeric_limits<float>::max())
		return true;
	return false;
}

bool ScalarConverter::doubleOverflow(const std::string& input)
{
	long double temp;

	temp = std::strtold(input.c_str(),NULL);
	if ( temp < -std::numeric_limits<double>::max() || temp > std::numeric_limits<double>::max())
		return true;
	return false;
}

void ScalarConverter::printChar(char c, const std::string& input)
{
	if (charOverflow(input) == true)
		std::cout << "Char: Overflow." << std::endl;
	else if(std::isprint(c))
		std::cout << "Char: '" << c << "'" << std::endl;
	else
		std::cout << "Char: non displayable." << std::endl;
}

void ScalarConverter::printInt(int num, const std::string& input)
{
	if (intOverflow(input) == true)
		std::cout << "Int: Overflow." << std::endl;
	else
		std::cout << "Int: " << num << std::endl;
}

void ScalarConverter::printFloat(float num, const std::string& input)
{
	if (floatOverflow(input) == true)
		std::cout <<"Float: Overflow." << std::endl;
	else
		std::cout << "Float: " << num << "f" << std::endl;
}

void ScalarConverter::printDouble(double num, const std::string& input)
{
	if (doubleOverflow(input) == true)
		std::cout <<"Double: Overflow." << std::endl;
	std::cout << "Double: " << num << std::endl;
}

void ScalarConverter::printOutput(long double number, const std::string& input)
{
	std::cout << "Raw Print: " << number << std::endl;
	printChar(static_cast<char>(number), input);
	printInt(static_cast<int>(number), input);
	printFloat(static_cast<float>(number), input);
	printDouble(static_cast<double>(number), input);
}

void ScalarConverter::printPseudo(const std::string& input)
{
	std::cout << "Char: Impossible" << std::endl;
	std::cout << "Int: Impossible" << std::endl;

	if (input.find("nan") != std::string::npos)
	{
		std::cout << "Float: nanf" << std::endl;
		std::cout << "Double: nan" << std::endl;
	}
	else
	{
		std::cout << "Float: " << input[0] << "inff" << std::endl;
		std::cout << "Double: " << input[0] << "inf" << std::endl;
	}
}

bool ScalarConverter::isChar(const std::string& input)
{
	if (input.length() == 1)
	{
		if (input[0] >= '0' && input[0] <= '9')
			return (false);
		if (input[0] >= 31 && input[0] < 127)
			return true;
	}
	return false;
}

bool ScalarConverter::isInt(const std::string& input)
{
	size_t i = 0;
	while(i < input.length())
	{
		if(i == 0 && input[i] == '-')
			i++;
		if (!isdigit(input[i]))
			return false;
		i++;
	}
	return true;
}

bool ScalarConverter::isFloat(const std::string& input)
{
	if (input[input.length() - 1] != 'f')
		return false;
	if (input.find_first_of('.') != input.find_last_of('.') || input.find('.') == std::string::npos)
		return false;
	for (size_t i = 0; (i < input.length() - 1); i++)
	{
		if (i == 0 && input[i] == '-')
			continue;
		if (input[i] == '.')
			continue;
		if (!isdigit(input[i]))
			return (false);
	}
	return true;
}

bool ScalarConverter::isDouble(const std::string& input)
{
	if (input.find_first_of('.') != input.find_last_of('.') || input.find('.') == std::string::npos)
		return false;
	for (size_t i = 0; (i < input.length() - 1); i++)
	{
		if (i == 0 && input[i] == '-')
			continue;
		if (input[i] == '.')
		{
			if (!isdigit(input[i + 1]) && !isdigit(input[i - 1]))
				return (false);
			continue;
		}
		if (!isdigit(input[i]))
			return (false);
	}
	return true;
}

bool ScalarConverter::isPseudo(const std::string& input)
{
	if (input == "-inff" || input == "+inff" || input == "nanf" || input == "-inf" || input == "+inf" || input == "nan")
		return (true);
	return (false);
}

void ScalarConverter::convert(const std::string& input)
{
	std::cout << std::fixed << std::setprecision(1);
	if (isChar(input) == true)
	{
		std::cout << "Is char!" << std::endl;
		printOutput(input[0], input);
	}
	else if (isInt(input) == true)
	{
		std::cout << "Is int!" << std::endl;
		printOutput(atoi(input.c_str()), input);
	}
	else if (isFloat(input))
	{
		std::cout << "Is float!" << std::endl;
		printOutput(std::strtof(input.c_str(), NULL), input);
	}
	else if (isDouble(input))
	{
		std::cout << "Is Double!" << std::endl;
		printOutput(std::strtof(input.c_str(), NULL), input);
	}
	else if (isPseudo(input))
	{
		std::cout << "Is Pseudo" << std::endl;
		printPseudo(input);
	}
	else
	{
		std::cout << "Invalid type." << std::endl;
		return ;
	}
}
