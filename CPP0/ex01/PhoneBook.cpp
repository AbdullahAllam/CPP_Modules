/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 00:19:22 by ama10362          #+#    #+#             */
/*   Updated: 2024/02/24 17:37:09 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <limits> 

PhoneBook::PhoneBook(){}
PhoneBook::~PhoneBook(){}

void PhoneBook::initiate(void) const
{
    std::cout << "----------------------------------" << std::endl;
    std::cout << "This is your PhoneBook" << std::endl;
    std::cout << "You can ONLY the commands : ADD, SEARCH, EXIT" << std::endl;
    std::cout << "----------------------------------" << std::endl;
}

void PhoneBook::addNew(void)
{
    static int  index;
    this->_mylist[index % 8].saveNew();
    this->_mylist[index % 8].modifyIndex(index % 8);
    index++;  
}

void PhoneBook::printList(void) const
{
    std::cout << "------------- This is your List -------------" << std::endl;
    std::cout << std::setw(10) << "index" << std::flush;
    std::cout << "|" << std::setw(10) << "FirstName" << std::flush;
    std::cout << "|" << std::setw(10) << "LastName" << std::flush;
    std::cout << "|" << std::setw(10) << "NickName" << std::flush;
    std::cout << "|" << std::endl;
    for (size_t i = 0; i < 8; i++) {
        this->_mylist[i].printContact(i);
    }
    std::cout << std::endl;    
}

void PhoneBook::search(void) const
{
    int     index = -1;
    bool    valid = false;
    
    while (!valid)
    {
        std::cout << "Please enter the contact Index: " << std::flush;
        std::cin >> index;
        if (std::cin.good() && (index >= 0 && index <= 7)) {
            valid = true;
        } else {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            std::cout << "Bad Input, Try again" << std::endl;
        }
    }
    this->_mylist[index].printDetails(index);
}
