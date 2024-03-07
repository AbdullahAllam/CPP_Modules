/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 01:15:22 by ama10362          #+#    #+#             */
/*   Updated: 2024/03/08 01:21:32 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;

    std::cout << "FragTrap " << this->_name << " constructed." << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap  " << this->_name << " destructed." << std::endl;
}

void    FragTrap::highFive( void ) {
    if ( this->_energyPoints <= 0 ) {
        std::cout << "| FragTrap | - " << this->_name << " is out of energy." << std::endl;
        return;
    }
    this->_energyPoints -= 1;
    std::cout << "FragTrap  " << this->_name << " high fives everybody." << std::endl;
}