/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 15:49:03 by ama10362          #+#    #+#             */
/*   Updated: 2024/03/02 17:47:11 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( void ) {

    std::string input;
    Harl        harl;

    do
    {
        std::cout << "Enter the task: ";
        std::cin >> input;
        harl.complain(input);
    } while (input.compare("exit"));

    return 0;
}