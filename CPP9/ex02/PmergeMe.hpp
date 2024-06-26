/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 22:50:16 by ama10362          #+#    #+#             */
/*   Updated: 2024/06/13 19:03:30 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <list>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <iostream>
//#include <iterator>

class PmergeMe {
public:
    PmergeMe();
    PmergeMe(const std::vector<int>& input);
    PmergeMe(const PmergeMe& other);
    PmergeMe& operator=(const PmergeMe& other);
    ~PmergeMe();
    
    void sort();
    void printUnsorted() const;
    void printSorted() const;
    void printTimes() const;

private:
    std::vector<int> vec;
    std::list<int> lst;
    double vecTime;
    double lstTime;

    void binaryInsertion(std::list<int>& sortedList, int element);
    void binaryInsertion(std::vector<int>& sortedVec, int element);
    void fordJohnsonSort(std::vector<int>& vec);
    void fordJohnsonSort(std::list<int>& lst);
    // void mergeInsertSort(std::vector<int>& vec);
    // void mergeInsertSort(std::list<int>& lst);
};

#endif
