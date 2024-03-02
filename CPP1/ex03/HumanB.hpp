/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 11:34:33 by ama10362          #+#    #+#             */
/*   Updated: 2024/03/02 12:00:50 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
private:
    std::string _name;
    Weapon* _weapon;
    HumanB();

public:
    HumanB(std::string name);
    ~HumanB();
    void    setWeapon(Weapon& weapon);
    void    attack(void) const;

};

#endif