/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 12:59:19 by ttavares          #+#    #+#             */
/*   Updated: 2024/03/20 14:21:49 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <vector>
#include <climits>
#include <cstdlib>
#include <algorithm>

class Span
{
    private:
        unsigned int _n;
        std::vector<int> _vector;
    public:
        Span();
        Span(unsigned int n);
        ~Span();
        Span(const Span& original);
        Span& operator=(const Span& original);

        void addNumber(int number);
        unsigned int shortestSpan();
        unsigned int longestSpan();
        void fill();
        void print();

    class VectorFullException : public std::exception
    {
        public:
            virtual const char *what() const throw()
            {
                return("Exception: Vector is full.");
            }
    };
    class VectorTooSmallException : public std::exception
    {
        public:
            virtual const char *what() const throw()
            {
                return("Exception: Vector is too small.");
            }
    };
};

