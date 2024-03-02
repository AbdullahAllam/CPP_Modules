/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 12:46:20 by ama10362          #+#    #+#             */
/*   Updated: 2024/03/02 11:55:03 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
    std::string _name;
    Weapon& _weapon;
    HumanA();
    HumanA(std::string name);
    
public:
    HumanA(std::string name, Weapon& weapon);
    ~HumanA();
    void attack(void) const;
};

#endif