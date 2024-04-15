/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttavares <ttavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:28:01 by ttavares          #+#    #+#             */
/*   Updated: 2024/04/15 15:03:40 by ttavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{

}

PmergeMe::~PmergeMe()
{

}

PmergeMe::PmergeMe(const PmergeMe& original)
{
    (void)original;
}

PmergeMe &PmergeMe::operator=(const PmergeMe& original)
{
    if (this != &original)
    {
        this->vec = original.vec;
        this->deq = original.deq;
    }
    return (*this);
}

bool PmergeMe::checkInput(std::string str)
{
    for (size_t i = 0; i < str.size(); i++)
    {
        if(!isdigit(str[i]) && str[i] != ' ')
            return false;
    }
    if (str.empty())
        return false;   
    int num;
    std::istringstream iss(str);
    std::vector<int> check;

    while ( iss >> num)
    {
        if (num < 0)
            return false;
        if (std::find(check.begin(), check.end(), num) != check.end())
        {
            return false;
        }
            check.push_back(num);
    }
    if (check.empty())
    {
        return false;
    }
    return true;
}

void PmergeMe::readInput(std::string input)
{
    if (!checkInput(input))
    {
        std::cerr << "Error: Invalid input." << std::endl;
        return ;
    }
    int num;
    std::stringstream ss(input);
    
    while (ss >> num)
    {
        this->vec.push_back(num);
    }

    ss.clear();
    ss.seekg(0);

    while (ss >> num)
    {
        this->deq.push_back(num);
    }

    std::cout << "Before: ";
    for (size_t i = 0; i < this->vec.size(); i++)
    {
        std::cout << this->vec[i] << " ";
    }
    std::cout << std::endl;

    // std::cout << "Deque Before: ";
    // for (size_t i = 0; i < this->deq.size(); i++)
    // {
    //     std::cout << this->deq[i] << " ";
    // }
    // std::cout << std::endl;

    
    clock_t start = clock();

    sortVector(this->vec, 0, this->vec.size() - 1);

    clock_t end = clock();

    double duration = double(end - start) / CLOCKS_PER_SEC;
    duration *= 1000;

    std::cout << "After: ";
    for (size_t i = 0; i < this->vec.size(); i++)
    {
        std::cout << this->vec[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Time to process range of " << this->vec.size() << " elements with std::vector : " << duration << " ms." << std::endl;

    start = clock();

    sortDeque(this->deq, 0, this->deq.size() - 1);

    end = clock();

    // std::cout << "Deque After: ";
    // for (size_t i = 0; i < this->deq.size(); i++)
    // {
    //     std::cout << this->deq[i] << " ";
    // }
    // std::cout << std::endl;

    duration = double(end - start) / CLOCKS_PER_SEC;
    duration *= 1000;

    std::cout << "Time to process range of " << this->deq.size() << " elements with std::deque : " << duration << " ms." << std::endl;

}

void PmergeMe::mergeVector(std::vector<int>& vec, int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;

    std::vector<int> L(n1), R(n2);

    for (int i = 0; i < n1; i++)
        L[i] = vec[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = vec[m + 1 + j];

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            vec[k] = L[i];
            i++;
        } else {
            vec[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        vec[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        vec[k] = R[j];
        j++;
        k++;
    }
}

void PmergeMe::sortVector(std::vector<int>& vec, int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;

        sortVector(vec, l, m);
        sortVector(vec, m + 1, r);

        mergeVector(vec, l, m, r);
    }
}

void PmergeMe::mergeDeque(std::deque<int>& vec, int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;

    std::vector<int> L(n1), R(n2);

    for (int i = 0; i < n1; i++)
        L[i] = vec[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = vec[m + 1 + j];

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            vec[k] = L[i];
            i++;
        } else {
            vec[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        vec[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        vec[k] = R[j];
        j++;
        k++;
    }
}

void PmergeMe::sortDeque(std::deque<int>& vec, int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;

        sortDeque(vec, l, m);
        sortDeque(vec, m + 1, r);

        mergeDeque(vec, l, m, r);
    }
}