/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 11:05:11 by ttavares          #+#    #+#             */
/*   Updated: 2024/04/12 11:43:21 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>
#include <iostream>
#include <exception>
#include <cstdlib>

class RPN
{
    private:
        std::stack<double> myStack;
    public:
        RPN();
        ~RPN();
        RPN(const RPN& original);
        RPN& operator=(const RPN& original);

        void readInput(std::string input);
        bool inputValid(std::string input);
        void solveOperation(char c);
};