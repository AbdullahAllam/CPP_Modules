/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 15:49:03 by ama10362          #+#    #+#             */
/*   Updated: 2024/03/02 18:29:40 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char** argv)
{
    if (argc != 2)
    {
        std::cout << "Bad number of Args" << std::endl;
        return 1;
    }
    Harl        harl;
    std::string input = argv[1];

    harl.complain(input);
    return 0;
}