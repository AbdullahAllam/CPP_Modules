/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 22:50:12 by ama10362          #+#    #+#             */
/*   Updated: 2024/06/10 22:52:51 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() : vec(), lst(), vecTime(0), lstTime(0) {}

PmergeMe::PmergeMe(const std::vector<int>& input) : vec(input), lst(input.begin(), input.end()), vecTime(0), lstTime(0) {}

PmergeMe::PmergeMe(const PmergeMe& other) : vec(other.vec), lst(other.lst), vecTime(other.vecTime), lstTime(other.lstTime) {}

PmergeMe& PmergeMe::operator=(const PmergeMe& other) {
    if (this != &other) {
        vec = other.vec;
        lst = other.lst;
        vecTime = other.vecTime;
        lstTime = other.lstTime;
    }
    return *this;
}

PmergeMe::~PmergeMe() {}
void PmergeMe::sort() {
    clock_t start, end;

    start = clock();
    mergeInsertSort(vec);
    end = clock();
    vecTime = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1e6;

    start = clock();
    mergeInsertSort(lst);
    end = clock();
    lstTime = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1e6;
}

void PmergeMe::printUnsorted() const {
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
}

void PmergeMe::printSorted() const {
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] <<  " ";
    }
    std::cout << std::endl;
}

void PmergeMe::printTimes() const {
    std::cout << "Time to process a range of " << vec.size() << " elements with std::vector: " << vecTime << " us" << std::endl;
    std::cout << "Time to process a range of " << lst.size() << " elements with std::list: " << lstTime << " us" << std::endl;
}

void PmergeMe::mergeInsertSort(std::vector<int>& vec) {
    if (vec.size() <= 1) return;

    std::vector<int>::iterator mid = vec.begin() + vec.size() / 2;
    std::vector<int> left(vec.begin(), mid);
    std::vector<int> right(mid, vec.end());

    mergeInsertSort(left);
    mergeInsertSort(right);

    std::merge(left.begin(), left.end(), right.begin(), right.end(), vec.begin());
}

void PmergeMe::mergeInsertSort(std::list<int>& lst) {
    if (lst.size() <= 1) return;

    std::list<int>::iterator mid = lst.begin();
    std::advance(mid, lst.size() / 2);  // Use std::advance instead of std::next for C++98 compatibility
    std::list<int> left(lst.begin(), mid);
    std::list<int> right(mid, lst.end());

    mergeInsertSort(left);
    mergeInsertSort(right);

    lst.clear();
    std::merge(left.begin(), left.end(), right.begin(), right.end(), std::back_inserter(lst));
}
