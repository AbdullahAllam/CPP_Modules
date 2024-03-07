/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 00:07:32 by ama10362          #+#    #+#             */
/*   Updated: 2024/03/08 01:45:17 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main( void )
{
    DiamondTrap diamond("RandomName");
    diamond.attack("RandomEnenmy");
    diamond.takeDamage(20);
    diamond.beRepaired(20);
    diamond.whoAmI();
    return 0;
}