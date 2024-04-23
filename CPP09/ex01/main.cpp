/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 11:13:59 by ttavares          #+#    #+#             */
/*   Updated: 2024/04/23 14:55:50 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main (int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Error: Wrong number of args." << std::endl;
        return 0;
    }
    try 
	{
		RPN polish;

		polish.readInput(argv[1]);
	}
    catch (std::exception& e) 
	{
        std::cerr << e.what() << std::endl;
    }
    return 0;
}