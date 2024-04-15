/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:28:12 by ttavares          #+#    #+#             */
/*   Updated: 2024/04/15 14:53:01 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <iostream>
#include <exception>
#include <cstdlib>
#include <sstream>
#include <ctime>
#include <deque>
#include <algorithm>

class PmergeMe
{
    private:
        std::vector<int> vec;
        std::deque<int> deq;
    public:
        PmergeMe();
        ~PmergeMe();
        PmergeMe(const PmergeMe& original);
        PmergeMe& operator=(const PmergeMe& original);

        void readInput(std::string);
        bool checkInput(std::string str);

        void sortVector(std::vector<int>& vec, int l, int r);
        void mergeVector(std::vector<int>& vec, int l,int m, int r);

        void sortDeque(std::deque<int>& vec, int l, int r);
        void mergeDeque(std::deque<int>& vec, int l,int m, int r);
};