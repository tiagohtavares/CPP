/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 12:59:19 by ttavares          #+#    #+#             */
/*   Updated: 2024/03/20 15:41:05 by ttavares         ###   ########.fr       */
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

        std::stack<T>::container_type::iterator begin(void);
        std::stack<T>::container_type::iterator end(void);
};

#include "MutantStack.tpp"