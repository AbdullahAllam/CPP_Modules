/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 00:07:32 by ama10362          #+#    #+#             */
/*   Updated: 2024/03/08 01:07:39 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main( void )
{
    ScavTrap scavtrap("RandomName");
    scavtrap.attack("RandomEnenmy");
    scavtrap.takeDamage(20);
    scavtrap.beRepaired(20);
    return 0;
}