/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 16:19:54 by ama10362          #+#    #+#             */
/*   Updated: 2024/05/21 16:30:17 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    size_t intArraySize = sizeof(intArray)/ sizeof(intArray[0]);
    std::cout << std::endl;
    std::cout << "Int array: " << std::endl;
    iter(intArray, intArraySize, &printWhatever);

    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    size_t doubleArraySize = sizeof(doubleArray)/ sizeof(doubleArray[0]);
    std::cout << std::endl;
    std::cout << "Double array: " << std::endl;
    iter(doubleArray, doubleArraySize, &printWhatever);

    std::string stringArray[] = {"Hello", "World", "C++", "Templates"};
    size_t stringArraySize = sizeof(stringArray)/ sizeof(stringArray[0]);
    std::cout << std::endl;
    std::cout << "String array: " << std::endl;
    iter(stringArray, stringArraySize, &printWhatever);

    return 0;
}