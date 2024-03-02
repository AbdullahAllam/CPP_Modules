/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 15:48:23 by ama10362          #+#    #+#             */
/*   Updated: 2024/02/25 16:20:08 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *FirstZombie = newZombie( "First" );
    FirstZombie->announce();
    delete FirstZombie;
    
    randomChump("Second");
    return (0);
}