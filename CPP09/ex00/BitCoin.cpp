/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitCoin.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:07:21 by ttavares          #+#    #+#             */
/*   Updated: 2024/03/22 16:08:43 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitCoin.hpp"

BitCoin::BitCoin()
{
    
}

BitCoin::~BitCoin()
{
    
}

BitCoin::BitCoin(const BitCoin& original)
{
    (void)original;
}

BitCoin &BitCoin::operator=(const BitCoin& original)
{
    (void)original;
    return (*this);
}

void BitCoin::readData()
{
    int pos;
    std::string line,date,temp;
    std::ifstream file("data.csv");
    if (!file.is_open())
    {
        std::cerr << "Error opening csv file." << std::endl;
        return;
    }
    std::getline(file, line);
    if (line != "date,exchange_rate")
    {
        std::cerr << "Error, csv file not valid format." << std::endl;
    }
    while(!file.eof())
    {
        std::getline(file, line);
        pos = line.find_first_of(',');
        date = line.substr(0, pos);
        this->data[date] = atof(line.substr(pos + 1).c_str());
    }
    std::map<std::string, double>::iterator it = this->data.begin();
    while(it != this->data.end())
    {
        std::cout << it->first << "," << it->second << std::endl;
        it++;
    }
}

void BitCoin::readInput(std::string path)
{
    (void)path;
    return ;
}

void BitCoin::exchange()
{
    
}