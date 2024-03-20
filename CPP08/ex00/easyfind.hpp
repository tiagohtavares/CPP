/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:32:25 by ttavares          #+#    #+#             */
/*   Updated: 2024/03/20 12:17:51 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>

class NotFoundException : public std::exception
{
    public:
        virtual const char *what() const throw()
        {
            return("Exception: Not found.");
        }
};

template <typename T>
void easyfind(const T& container, int n)
{
    if (std::find(container.begin(), container.end(), n) != container.end())
    {
        std::cout << "found " << n << " in the container!" << std::endl;
    }
    else
    {
        throw NotFoundException();
    }
}