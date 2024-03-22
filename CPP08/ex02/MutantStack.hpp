/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 12:59:19 by ttavares          #+#    #+#             */
/*   Updated: 2024/03/22 12:44:25 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<iostream>
#include<stack>
#include<iterator>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack();
        ~MutantStack();
        MutantStack(const MutantStack& original);
        MutantStack& operator=(const MutantStack& original);

        typedef typename std::stack<T>::container_type::iterator iterator;

        iterator begin(void);
        iterator end(void);
};

#include "MutantStack.tpp"