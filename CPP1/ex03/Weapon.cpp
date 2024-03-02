/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 10:48:09 by ama10362          #+#    #+#             */
/*   Updated: 2024/02/26 13:06:15 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->setType(type);    
};

Weapon::~Weapon(){};

void Weapon::setType(std::string type)
{
    this->_type = type;
}

const std::string& Weapon::getType(void)
{
    return (this->_type);
}
