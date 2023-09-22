/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:57:42 by ttavares          #+#    #+#             */
/*   Updated: 2023/09/22 16:26:10 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	if (argc != 4 || argc == 1)
	{
		std::cout << "Wrong number of args!" << std::endl;
		return 0;
	}
	std::string filename = argv[1];
	std::ifstream inputFile;
	inputFile.open(filename);
	std::string original;
	inputFile >> original;

	filename += ".replace";
	std::ofstream outputFile(filename);

	std::string formatted;
	std::string search = argv[2];
	std::string replace = argv[3];

	
	outputFile << formatted << std::endl;
}
