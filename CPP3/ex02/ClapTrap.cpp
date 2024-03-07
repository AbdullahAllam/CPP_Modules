/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 00:17:26 by ama10362          #+#    #+#             */
/*   Updated: 2024/03/08 00:36:09 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Instance of ClapTrap named " << _name << " created" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Instance " << this->_name << " of ClapTrap destroyed" << std::endl;    
}

ClapTrap::ClapTrap(const ClapTrap &otherTrap)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = otherTrap;      
}

ClapTrap& ClapTrap::operator=(const ClapTrap& otherTrap)
{
    this->_name = otherTrap._name;
    this->_hitPoints = otherTrap._hitPoints;
    this->_energyPoints = otherTrap._energyPoints;
    this->_attackDamage = otherTrap._attackDamage;
    return *this;
}

void    ClapTrap::attack( std::string const& target )
{
    if (_energyPoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " has no energy" << std::endl;
        return;
    }
    _energyPoints -= 1;
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void    ClapTrap::takeDamage( unsigned int amount )
{
    if (_hitPoints <= amount)
    {
        std::cout << "ClapTrap " << _name << " DIES!" << std::endl;
        return;
    }
    _hitPoints -= amount;
    std::cout << "ClapTrap " << _name << " takes " << amount << " damage!" << std::endl;
}

void    ClapTrap::beRepaired( unsigned int amount )
{
    if (_energyPoints <= amount)
    {
        std::cout << "ClapTrap " << _name << "  has no energy" << std::endl;
        return;
    }
    _energyPoints -= 1;
    _hitPoints += amount;
    std::cout << "ClapTrap " << _name << " repairs itself for " << amount << " hit points!" << std::endl;
}
