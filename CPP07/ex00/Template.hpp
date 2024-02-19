/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:32:25 by ttavares          #+#    #+#             */
/*   Updated: 2024/02/19 18:52:41 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
void swap(T& a, T& b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T max(const T& a, const T& b)
{
	return (a > b) ? a : b;
}

template <typename T>
T min(const T& a, const T& b)
{
	return (a < b) ? a : b;
}
