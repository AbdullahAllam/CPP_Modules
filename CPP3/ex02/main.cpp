/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 00:07:32 by ama10362          #+#    #+#             */
/*   Updated: 2024/03/08 01:14:15 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main( void )
{
    FragTrap fragtrap("RandomName");
    fragtrap.attack("RandomEnenmy");
    fragtrap.takeDamage(20);
    fragtrap.beRepaired(20);
    return 0;
}