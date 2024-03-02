/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 15:48:57 by ama10362          #+#    #+#             */
/*   Updated: 2024/03/03 02:36:48 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void    Harl::debug( void ) {
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
    std::cout << std::endl;
}

void    Harl::info( void ) {
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
    std::cout << std::endl;
}

void    Harl::warning( void ) {
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." <<std::endl << "I've been coming for years whereas you started working here since last month." << std::endl;
    std::cout << std::endl;
}

void    Harl::error( void ) {
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
    std::cout << std::endl;
}

void    Harl::complain(std:: string level)
{
    int i = 0;
    std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR"};
    while (i < 4 && levels[i].compare(level))
        i++;
    switch (i)
    {
    case    0: 
        this->debug();
        this->info();
        this->warning();
        this->error();
        break;
    case    1: 
        this->info();
        this->warning();
        this->error();
        break;
    case    2: 
        this->warning();
        this->error();
        break;
    case    3: 
        this->error();
        break;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        break;
    }

}