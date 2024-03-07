/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 00:07:32 by ama10362          #+#    #+#             */
/*   Updated: 2024/03/08 00:10:27 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
    ClapTrap claptrap("RandomName");
    claptrap.attack("RandomEnenmy");
    claptrap.takeDamage(5);
    claptrap.beRepaired(5);
    return 0;
}