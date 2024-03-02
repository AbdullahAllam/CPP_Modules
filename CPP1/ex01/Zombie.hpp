/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 16:23:43 by ama10362          #+#    #+#             */
/*   Updated: 2024/02/25 16:46:38 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
    std::string name;

public:
    Zombie(std::string name);
    Zombie(void);
    ~Zombie(void);
    void announce( void );
    void setName(std::string name);

};

 Zombie* zombieHorde( int N, std::string name );

#endif