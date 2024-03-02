/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 16:23:14 by ama10362          #+#    #+#             */
/*   Updated: 2024/02/25 16:50:23 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
    Zombie *list;
    int n = 5;
    int counter = 0;
    
    list = zombieHorde(n, "NewZombie");
    while (counter < n)
    {
        list[counter].announce();
        counter++;
    }
    delete[] list;
    return 0;
}