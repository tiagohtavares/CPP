/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:32:25 by ttavares          #+#    #+#             */
/*   Updated: 2024/02/19 18:56:33 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
void iter(T *arr, int len, void (*f)(T&))
{
	for (int i = 0; i < len; i++)
		f(arr[i]);
}

template <typename T>
void print(T& a) {
	std::cout << a << " ";
}
