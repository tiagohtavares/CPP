/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 13:03:18 by ttavares          #+#    #+#             */
/*   Updated: 2024/03/20 14:28:36 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _n(0)
{

}

Span::Span(unsigned int n) : _n(n)
{

}

Span::~Span()
{

}

Span::Span(const Span& original) : _n(original._n), _vector(original._vector)
{

}

Span &Span::operator=(const Span& original)
{
    if (this != &original)
    {
        this->_n = original._n;
        this->_vector.clear();
        std::copy(original._vector.begin(), original._vector.end(), this->_vector.begin());
    }
    return (*this);
}

void Span::addNumber(int number)
{
    if (this->_vector.size() == this->_n)
    {
        throw Span::VectorFullException();
    }
    else
    this->_vector.push_back(number);
}

unsigned int Span::shortestSpan()
{
    unsigned int i;
    unsigned int j;
    unsigned int span;
    unsigned int min = UINT_MAX;
    if (this->_n < 2)
    {
        throw Span::VectorTooSmallException();
    }
    else
    {
        i = 0;
        while(i < this->_vector.size())
        {
            j = i + 1;
            while(j < this->_vector.size())
            {
                span = abs(this->_vector[i] - this->_vector[j]);
                if (span < min)
                {
                    min = span;
                }
                j++;
            }
            i++;
        }
    }
    return (min);
}

unsigned int Span::longestSpan()
{
    int min;
    int max;
    if (this->_n < 2)
    {
        throw Span::VectorTooSmallException();
    }  
    else
    {
        min = *(std::min_element(this->_vector.begin(), this->_vector.end()));
        max = *(std::max_element(this->_vector.begin(), this->_vector.end()));
    }
    return (max - min);
}

int gen(void)
{
    return(std::rand() % 10000);
}

void Span::fill()
{
    this->_vector.resize(this->_n);
    std::generate(this->_vector.begin(), this->_vector.end(), &gen);
}

void Span::print()
{
	std::vector<int>::iterator it1 = this->_vector.begin();
	while(it1 != this->_vector.end())
	{
		std::cout << *it1 << std::endl;
		it1++;
	}    
}