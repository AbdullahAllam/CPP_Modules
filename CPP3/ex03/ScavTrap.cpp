/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 00:41:42 by ama10362          #+#    #+#             */
/*   Updated: 2024/03/08 01:08:35 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;

    std::cout << "Instance of ScavTrap called  " << this->_name << "  was constructed." << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap  " << this->_name << " destructed." << std::endl;
}

void    ScavTrap::attack( std::string const& target ) {
    if ( this->_energyPoints <= 0 ) {
        std::cout << "< ScavTrap > - " << this->_name << " has no energy." << std::endl;
        return;
    }
    this->_energyPoints -= 1;
    std::cout << "ScavTrap  " << this->_name << " attacks " << target << " in ScavTrap WAY causing  " << this->_attackDamage << " points of damage !" << std::endl;
}

void    ScavTrap::guardGate() {
    std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode." << std::endl;
}