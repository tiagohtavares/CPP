/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:49:44 by ttavares          #+#    #+#             */
/*   Updated: 2024/03/22 12:05:08 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main( void )
{
    std::cout << "Mutant Stack" << std::endl;
    
    MutantStack<int> mutant;
    mutant.push(42);
    mutant.push(15);
    mutant.push(52);
    mutant.push(9);
    mutant.push(46);
    mutant.push(82);

    std::cout << mutant.top() << std::endl;
    
    std::cout << "Iterating!" << std::endl;
    MutantStack<int>::iterator itb = mutant.begin();
    MutantStack<int>::iterator ite = mutant.end();
    while(itb != ite)
    {
        std::cout << *itb << std::endl;
        itb++;
    }

    std::cout << "List" << std::endl;

    std::list<int> list;
    list.push_back(42);
    list.push_back(15);
    list.push_back(52);
    list.push_back(9);
    list.push_back(46);
    list.push_back(82);

    std::cout << "Iterating!" << std::endl;
    std::list<int>::iterator itb1 = list.begin();
    std::list<int>::iterator ite1 = list.end();
    while(itb1 != ite1)
    {
        std::cout << *itb1 << std::endl;
        ++itb1;
    }
    return 0;
}
