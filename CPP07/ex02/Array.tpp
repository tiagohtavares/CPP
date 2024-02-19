/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Template.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:11:17 by ttavares          #+#    #+#             */
/*   Updated: 2024/02/19 19:11:17 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <class T>
Array<T>::Array() : _n(0)
{
	this->_array = new T[this->_n];
}

template <class T>
Array<T>::Array(unsigned int n) : _n(n)
{
		this->_array = new T[this->_n];
		for (unsigned int i = 0; i < this->_n; i++)
		{
			this->_array[i] = T();
		}
}

template <class T>
Array<T>::~Array()
{
	delete[] this->_array;
}

template <class T>
Array<T>::Array(const Array& original)
{
	this->_n = original._n;
	this->_array = new T[this->_n];
	for (unsigned int i = 0; i < original._n; i++)
		this->_array[i] = original._array[i];
}

template <class T>
Array<T>& Array<T>::operator=(const Array<T>& original)
{
	if (this != &original)
	{
		delete[] this->_array;
		this->_n = original._n;
		this->_array = new T[this->_n];
		for (unsigned int i = 0; i < original._n; i++)
			this->_array[i] = original._array[i];
	}
	return (*this);
}

template <class T>
T& Array<T>::operator[](unsigned int index)
{
	if (index >= this->_n || this->_array == NULL)
		throw Array<T>::IndexException();
	return (this->_array[index]);
}

template <class T>
int Array<T>::size() const
{
	return (this->_n);
}

template <class T>
const char *Array<T>::IndexException::what() const throw()
{
	return ("Exception: Index out of bounds");
}
