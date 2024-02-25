/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 23:29:28 by ama10362          #+#    #+#             */
/*   Updated: 2024/02/24 17:15:45 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include <string>

int main()
{
    std::string prompt = " ";
    PhoneBook mylist;
    
    mylist.initiate();
    while (prompt.compare("EXIT") != 0)
    {
        std::cout << "> " << std::flush;
        std::cin >> prompt;
        if (prompt.compare("ADD") == 0)
            mylist.addNew();
        else if (prompt.compare("SEARCH") == 0)
        {
            mylist.printList();
            mylist.search();
        }
    }
    return (0);
}