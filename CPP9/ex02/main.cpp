/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 22:50:19 by ama10362          #+#    #+#             */
/*   Updated: 2024/06/10 22:54:41 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char *argv[]) {
    if (argc < 2) {
        std::cerr << "Error: Please provide a sequence of positive integers." << std::endl;
        return 1;
    }

    std::vector<int> vec;
    try {
        for (int i = 1; i < argc; ++i) {
            int num = std::atoi(argv[i]);
            if (num <= 0) throw std::invalid_argument("Error: All arguments must be positive integers.");
            vec.push_back(num);
        }
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }

    PmergeMe sorter(vec);

    std::cout << "Before: ";
    sorter.printUnsorted();

    sorter.sort();

    std::cout << "After: ";
    sorter.printSorted();

    sorter.printTimes();

    return 0;
}
