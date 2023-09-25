/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:57:42 by ttavares          #+#    #+#             */
/*   Updated: 2023/09/25 10:54:08 by ttavares         ###   ########.fr       */
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

	if(!inputFile)
		return 1;

	inputFile.open(filename);
	std::string original;
	std::string temp;
	bool isFirstLine = true;
    while (std::getline(inputFile, temp))
    {
        if (!isFirstLine)
        {
            original += "\n";
        }
        original += temp;
        isFirstLine = false;
    }
	filename += ".replace";
	std::ofstream outputFile(filename);

	if(!outputFile)
		return 1;

	std::string formatted;
	std::string search = argv[2];
	std::string replace = argv[3];

	if(original.find(search) != std::string::npos)
	{
		size_t pos = 0;
		while(1)
		{
			pos = original.find(search, pos);
			if (pos == std::string::npos)
				break ;
			original.erase(pos, search.length());
			original.insert(pos, replace);
			pos += replace.length();
		}
	}
	outputFile << original << std::endl;

	inputFile.close();
	outputFile.close();
	return (0);
}
