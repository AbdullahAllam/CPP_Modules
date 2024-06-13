/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 22:50:12 by ama10362          #+#    #+#             */
/*   Updated: 2024/06/13 19:04:29 by ama10362         ###   ########.fr       */
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

// Function to perform binary insertion of an element into a sorted vector
void PmergeMe::binaryInsertion(std::vector<int>& sortedVec, int element) {
    std::vector<int>::iterator pos = std::lower_bound(sortedVec.begin(), sortedVec.end(), element);
    sortedVec.insert(pos, element);
}

void PmergeMe::fordJohnsonSort(std::vector<int>& arr) {
    int n = arr.size();

    // Handle trivial cases
    if (n <= 1) return;

    // Step 1: Pair up elements and sort each pair
    std::vector< std::pair<int, int> > pairs;
    for (int i = 0; i < n - 1; i += 2) {
        int first = std::min(arr[i], arr[i + 1]);
        int second = std::max(arr[i], arr[i + 1]);
        pairs.push_back(std::make_pair(first, second));
    }

    // If there's an odd element out, just add it as a pair with itself
    if (n % 2 != 0) {
        pairs.push_back(std::make_pair(arr[n - 1], arr[n - 1]));
    }

    // Step 2: Create initial sorted sequence from the smaller elements of each pair
    std::vector<int> initialSorted;
    for (size_t i = 0; i < pairs.size(); ++i) {
        initialSorted.push_back(pairs[i].first);
    }
    std::sort(initialSorted.begin(), initialSorted.end());

    // Step 3: Merge-insert the larger elements of each pair
    for (size_t i = 0; i < pairs.size(); ++i) {
        if (pairs[i].first != pairs[i].second) {
            binaryInsertion(initialSorted, pairs[i].second);
        }
    }

    // Copy the sorted elements back to the original array
    arr = initialSorted;
}

void PmergeMe::binaryInsertion(std::list<int>& sortedList, int element) {
    std::list<int>::iterator pos = std::lower_bound(sortedList.begin(), sortedList.end(), element);
    sortedList.insert(pos, element);
}

void PmergeMe::fordJohnsonSort(std::list<int>& lst) {
    int n = lst.size();

    // Handle trivial cases
    if (n <= 1) return;

    // Step 1: Pair up elements and sort each pair
    std::list< std::pair<int, int> > pairs;
    std::list<int>::iterator it = lst.begin();
    while (it != lst.end()) {
        int first = *it;
        ++it;
        if (it != lst.end()) {
            int second = *it;
            ++it;
            pairs.push_back(std::make_pair(std::min(first, second), std::max(first, second)));
        } else {
            pairs.push_back(std::make_pair(first, first)); // Handle the odd element out
        }
    }

    // Step 2: Create initial sorted sequence from the smaller elements of each pair
    std::list<int> initialSorted;
    for (std::list< std::pair<int, int> >::iterator pit = pairs.begin(); pit != pairs.end(); ++pit) {
        initialSorted.push_back(pit->first);
    }
    initialSorted.sort();

    // Step 3: Merge-insert the larger elements of each pair
    for (std::list< std::pair<int, int> >::iterator pit = pairs.begin(); pit != pairs.end(); ++pit) {
        if (pit->first != pit->second) {
            binaryInsertion(initialSorted, pit->second);
        }
    }

    // Copy the sorted elements back to the original list
    lst = initialSorted;
}

