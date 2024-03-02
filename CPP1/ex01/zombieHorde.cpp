/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 16:22:53 by ama10362          #+#    #+#             */
/*   Updated: 2024/02/25 16:48:08 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

 Zombie* zombieHorde( int N, std::string name )
 {
    Zombie *zombiList = new Zombie[N];
    
    for (int i = 0 ; i < N ; i++)
    {
        zombiList[i].setName(name);
    }
    return zombiList;
 }