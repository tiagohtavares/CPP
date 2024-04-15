/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:28:22 by ttavares          #+#    #+#             */
/*   Updated: 2024/04/15 11:32:36 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Error: Wrong number of args." << std::endl;
        return 0;
    }
    try 
	{
		PmergeMe sort;

		sort.readInput(argv[1]);
	}
    catch (std::exception& e) 
	{
        std::cerr << e.what() << std::endl;
    }
    return 0;
}