/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 12:47:31 by ama10362          #+#    #+#             */
/*   Updated: 2024/03/02 14:59:37 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FindAndReplace.hpp"

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Bad number of Args" << std::endl;
        return (1);        
    }
    FindAndReplace myClass(argv[1]);
    myClass.replace(argv[2], argv[3]);
    return (0);
}