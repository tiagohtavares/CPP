/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 11:05:15 by ttavares          #+#    #+#             */
/*   Updated: 2024/04/12 12:38:40 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{

}

RPN::~RPN()
{

}

RPN::RPN(const RPN& original)
{
    (void)original;
}

RPN &RPN::operator=(const RPN& original)
{
    (void)original;
    return (*this);
}

bool RPN::inputValid(std::string input)
{
    std::string token;
    for(size_t i = 0; i < input.length(); i++)
    {
         token = input[i];
         if(token[0] != ' ' && !isdigit(token[0]) && token[0] != '+'
            && token[0] != '-' && token[0] != '*' && token[0] != '/')
            return false;
    }
    return true;
}

void RPN::solveOperation(char c)
{
    //std::cout << "Token is : " << c << std::endl;
    double operator1,operator2;

    if (this->myStack.empty())
    {
        throw std::runtime_error("Error: invalid operation");
    }

    operator1 = this->myStack.top();
    this->myStack.pop();
    //std::cout << "Operator1 is : " << operator1 << std::endl;
    if (this->myStack.empty())
    {
        throw std::runtime_error("Error: invalid operation");
    }

    operator2 = this->myStack.top();
    this->myStack.pop();
    //std::cout << "Operator1 is : " << operator2 << std::endl;

    switch (c)
    {
        case '+':
            this->myStack.push(operator2 + operator1);
            break;
        case '-':
            this->myStack.push(operator2 - operator1);
            break;
        case '*':
            this->myStack.push(operator2 * operator1);
            break;
        case '/':
            {
            if (operator1 == 0)
            {
                throw std::runtime_error("Error: impossible to divide by 0");
            }
                this->myStack.push(operator2 / operator1);
            }
            break;
    }
    //std::cout << "Top of stack is : " << myStack.top() << std::endl;
}

void RPN::readInput(std::string input)
{
    //std::cout << "Input string is : " << input << std::endl;
    if (!inputValid(input))
    {
        std::cerr << "Error: Invalid input." << std::endl;
        return ;
    }
    std::string token;
    for(size_t i = 0; i < input.length(); i++)
    {
        token = input[i];
        //std::cout << "Token is : " << token << std::endl;
        if(token == " ")
            continue;
        if(isdigit(token[0]))
        {
            this->myStack.push(atof(token.c_str()));
            //std::cout << "Number pushing to the top is: " << myStack.top() << std::endl;
        }
        if (token[0] == '+' || token[0] == '-' || token[0] == '*' || token[0] == '/')        
        {
            solveOperation(token[0]);
        }
    }
    double temp = this->myStack.top();
    myStack.pop();
    if (!this->myStack.empty())
    {
        throw std::runtime_error("Error: Invalid input.");
    }
    std::cout << temp << std::endl;

}