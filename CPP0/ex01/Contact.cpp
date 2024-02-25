/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 16:30:40 by ama10362          #+#    #+#             */
/*   Updated: 2024/02/24 17:31:53 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){}

Contact::~Contact(){}

std::string Contact::_putRightLength(std::string textToAdjust) const
{
    if (textToAdjust.length() > 10)
        return textToAdjust.substr(0, 9) + ".";
    return textToAdjust;
}

void    Contact::printContact(int index) const
{
    if (this->_firstName.empty())
        return;
    std::cout << std::setw(10) << index << std::flush;
    std::cout << "|" << std::setw(10) << this->_putRightLength(this->_firstName) << std::flush;
    std::cout << "|" << std::setw(10) << this->_putRightLength(this->_lastName) << std::flush;
    std::cout << "|" << std::setw(10) << this->_putRightLength(this->_nickname) << std::flush;
    std::cout << "|" << std::endl;
}

void    Contact::printDetails(int index) const
{
    if (this->_firstName.empty())
        return;
    std::cout << std::endl;
    std::cout << "---->> CONTACT #" << index << " <<----" << std::endl;
    std::cout << "First Name:\t" << this->_firstName << std::endl;
    std::cout << "Last Name:\t" << this->_lastName << std::endl;
    std::cout << "Nickname:\t" << this->_nickname << std::endl;
    std::cout << "Phone Number:\t" << this->_phoneNumber << std::endl;
    std::cout << "Dark Secret:\t" << this->_darkestSecret << std::endl;

    std::cout << std::endl;
}

std::string Contact::_fillData(std::string toPrint)
{
    std::string input = "";
    bool        valid = false;
    do
    {
        std::cout << toPrint << std::flush;
        std::getline(std::cin, input);
        if (std::cin.good() && !input.empty())
            valid = true;
        else {
            std::cin.clear();
            std::cout << "Invalid input; please try again." << std::endl;
        }
    } while (!valid);
    return (input);
}

void Contact::saveNew(void)
{
    std::cin.ignore();
    this->_firstName = this->_fillData("Please enter first name: ");
    this->_lastName = this->_fillData("Please enter last name: ");
    this->_nickname = this->_fillData("Please enter nickname: ");
    this->_phoneNumber = this->_fillData("Please enter phone number: ");
    this->_darkestSecret = this->_fillData("Please enter darkest secret: ");
    std::cout << std::endl;
}

void    Contact::modifyIndex(int index) {
    this->_index = index;
}