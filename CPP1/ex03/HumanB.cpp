/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 11:45:01 by ama10362          #+#    #+#             */
/*   Updated: 2024/03/02 12:02:43 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->_name = name;
    this->_weapon = NULL;
}

HumanB::~HumanB(){}

void    HumanB::setWeapon(Weapon& weapon)
{
    this->_weapon = &weapon;
}
void    HumanB::attack(void) const
{
    std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}