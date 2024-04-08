/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:49:44 by ttavares          #+#    #+#             */
/*   Updated: 2024/04/08 15:06:22 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitCoin.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Error: Wrong number of args." << std::endl;
		return 0;
	}

	try 
	{
		BitCoin bitcoin;

		bitcoin.readData();
		bitcoin.readInput(argv[1]);
	}
    catch (std::exception& e) 
	{
        std::cerr << e.what() << std::endl;
    }
	return 0;
}
