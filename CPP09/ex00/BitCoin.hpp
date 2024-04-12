/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitCoin.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:07:24 by ttavares          #+#    #+#             */
/*   Updated: 2024/04/12 11:05:51 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <map>
#include <string>
#include <fstream>
#include <iostream>
#include <map>
#include <cstdlib>
#include <ctime>
#include <exception>

class BitCoin
{
    private:
        std::map<std::string, float> data;
    public:
        BitCoin();
        ~BitCoin();
        BitCoin(const BitCoin& original);
        BitCoin& operator=(const BitCoin& original);

        void readData();
        void readInput(std::string path);
        bool validateDate(std::string date);
        bool validateValue(std::string value);
        void exchange(std::string date, std::string value);
};