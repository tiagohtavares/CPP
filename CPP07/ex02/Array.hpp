/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:32:25 by ttavares          #+#    #+#             */
/*   Updated: 2024/02/19 19:50:44 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <class T>
class Array
{
	private:
		T* _array;
		unsigned int _n;

	public:
		Array();
		Array(unsigned int n);
		Array(const Array& original);
		~Array();
		Array& operator=(const Array& original);
		T& operator[](unsigned int i);

		int size() const;

		class IndexException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

#include "Array.tpp"
