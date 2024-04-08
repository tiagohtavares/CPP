/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitCoin.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:07:21 by ttavares          #+#    #+#             */
/*   Updated: 2024/04/08 15:04:57 by ttavares         ###   ########.fr       */
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
        throw std::runtime_error("Error: couldn't open database file.");
        return;
    }
    std::getline(file, line);
    if (line != "date,exchange_rate")
    {
        throw std::runtime_error("Error: invalid database file.");
        return;
    }
    while(!file.eof())
    {
        std::getline(file, line);
        pos = line.find_first_of(',');
        date = line.substr(0, pos);
        this->data[date] = atof(line.substr(pos + 1).c_str());
    }
    // std::map<std::string, double>::iterator it = this->data.begin();
    // it++;
    // while(it != this->data.end())
    // {
    //     std::cout << it->first << "," << it->second << std::endl;
    //     it++;
    // }
    file.close();
}

void BitCoin::readInput(std::string path)
{
    size_t pos;
    std::string date,value;
    std::string line;
    std::ifstream file(path.c_str());
    if (!file.is_open())
    {
        throw std::runtime_error("Error: couldn't open input file.");
        return;
    }
    std::getline(file, line);
    if (line != "date | value")
    {
        throw std::runtime_error("Error: invalid inputfile.");
        return;
    }
    while (!file.eof())
    {
        pos = 0;
        std::getline(file, line);
        if(line.empty())
            continue;
        if(line == "date | value")
            continue;
            
        pos = line.find('|', pos);
        //std::cout << pos << std::endl;
        if (pos == std::string::npos)
        {
            std::cerr << "Error: Bad input => " << line << std::endl;
            continue;
        }
        date = line.substr(0, pos -1);
        if(validateDate(date) == false)
        {
            std::cerr << "Error: bad date input => " << date << std::endl;
            continue;
        }
        value = line.substr(pos + 1);
        if(validateValue(value) == false)
        {       
            continue;
        }
        BitCoin::exchange(date , value);
    }
    file.close();
}

void BitCoin::exchange(std::string date, std::string value)
{
    std::tm date1 = {};
    std::tm date2 = {};
    std::string temp_date;
    float num = std::strtod(value.c_str(), NULL);
    //std::cout << date << std::endl;
    //std::cout << num << std::endl;
    //std::cout << data[date] << std::endl;
    if(this->data.find(date) != this->data.end())
    {
        std::cout << date << " |" << value << " = " << num * data[date] << std::endl;
    }
    else
    {
        std::map<std::string, float>::iterator it = this->data.begin();
        it++;
        temp_date = it->first;
        while(it != this->data.end())
        {   
            strptime(it->first.c_str(), "%Y-%m-%d", &date1);
            strptime(date.c_str(), "%Y-%m-%d", &date2);
            //std::cout << it->first << " | " << it->second << std::endl;
            if(std::mktime(&date1) < std::mktime(&date2))
                temp_date = (*it).first;
            it++;
        }
        //std::cout << "Temp date " << temp_date << " Previous date " << date << std::endl;
        std::cout << date << " |" << value << " = " << num * data[temp_date] << std::endl;
    }
}

bool BitCoin::validateValue(std::string value)
{
    size_t i;
    double num;

    i = 0;
    while (i < value.length())
    {
        if(!isdigit(value[i]) && value[i] != ' ' && value[i] != '.' && value[i] != '-')
        {
            std::cerr << "Error: value is not a number." << std::endl;    
            return false;
        }
        i++;
    }

    num = std::strtod(value.c_str(), NULL);
    if (num < 0 )
    {
        std::cerr << "Error: not a positive number." << std::endl;    
        return false;
    }
    if (num > 1000 )
    {
        std::cerr << "Error: too large a number." << std::endl;
        return false;
    }
    return true;
}

bool BitCoin::validateDate(std::string date)
{
    std::string year,month,day;
    int maxmonth,maxday;
    size_t i;

    //std::cout << date << std::endl;
    
    if(date.length() != 10)
    {
        return false;
    }    
    
    year = date.substr(0,4);
    month = date.substr(5,2);
    day = date.substr(8);

    //std::cout << year << "/" << month << "/" << day << "/" << std::endl;  

    i = 0;
    while (i < year.length())
    {
        if(!isdigit(year[i]))
            return false;
        i++;
    }

    i = 0;
    while (i < month.length())
    {
        if(!isdigit(month[i]))
            return false;
        i++;
    }

    i = 0;
    while (i < day.length())
    {
        if(!isdigit(day[i]))
            return false;
        i++;
    }

    maxmonth = atoi(month.c_str());
    maxday = atoi(day.c_str());

    if(maxmonth < 1 || maxmonth > 12)
        return false;
    
    if (maxday < 1 || maxday > 31)
        return false;

    return true;
}

