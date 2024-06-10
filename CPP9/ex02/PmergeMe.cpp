/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 22:50:12 by ama10362          #+#    #+#             */
/*   Updated: 2024/06/10 23:29:56 by ama10362         ###   ########.fr       */
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
    fordJohnsonSort(vec);
    end = clock();
    vecTime = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1e6;

    start = clock();
    fordJohnsonSort(lst);
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

void PmergeMe::fordJohnsonSort(std::vector<int>& vec) {
    int n = vec.size();

    // Selection sort
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (vec[j] < vec[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            std::swap(vec[i], vec[minIndex]);
        }
    }

    // Bubble sort
    bool swapped;
    for (int i = 0; i < n - 1; ++i) {
        swapped = false;
        for (int j = 0; j < n - i - 1; ++j) {
            if (vec[j] > vec[j + 1]) {
                std::swap(vec[j], vec[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) {
            break; // If no swaps occur, the array is already sorted
        }
    }
}

void PmergeMe::fordJohnsonSort(std::list<int>& lst) {
    // Selection sort
    for (std::list<int>::iterator it = lst.begin(); it != lst.end(); ++it) {
        std::list<int>::iterator minElement = it;
        for (std::list<int>::iterator it2 = it; it2 != lst.end(); ++it2) {
            if (*it2 < *minElement) {
                minElement = it2;
            }
        }
        if (minElement != it) {
            std::iter_swap(it, minElement);
        }
    }

    // Bubble sort
    bool swapped;
    std::list<int>::iterator last = lst.end();
    do {
        swapped = false;
        for (std::list<int>::iterator it = lst.begin(); it != last; ++it) {
            std::list<int>::iterator nextIt = it;
            std::advance(nextIt, 1);
            if (nextIt != lst.end() && *it > *nextIt) {
                std::iter_swap(it, nextIt);
                swapped = true;
            }
        }
        --last;
    } while (swapped);
}
