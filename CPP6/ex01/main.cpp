/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 15:27:32 by ama10362          #+#    #+#             */
/*   Updated: 2024/05/18 15:27:46 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Data.hpp"
#include "Serializer.hpp"

int main() {
    Data data;
    data.id = 42;
    data.name = "Test Data";

    uintptr_t serialized = Serializer::serialize(&data);

    Data* deserialized = Serializer::deserialize(serialized);

    if (deserialized == &data) {
        std::cout << "Serialization and deserialization successful." << std::endl;
        std::cout << "Data ID: " << deserialized->id << std::endl;
        std::cout << "Data Name: " << deserialized->name << std::endl;
    } else {
        std::cout << "Serialization and deserialization failed." << std::endl;
    }

    return 0;
}
