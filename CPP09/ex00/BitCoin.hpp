/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitCoin.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:07:24 by ttavares          #+#    #+#             */
/*   Updated: 2024/03/22 16:00:48 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
        std::map<std::string, int> txt;
        std::map<std::string, double> data;
    public:
        BitCoin();
        ~BitCoin();
        BitCoin(const BitCoin& original);
        BitCoin& operator=(const BitCoin& original);

        void readData();
        void readInput(std::string path);
        void exchange();

};