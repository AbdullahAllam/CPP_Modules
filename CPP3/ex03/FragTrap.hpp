/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 01:15:19 by ama10362          #+#    #+#             */
/*   Updated: 2024/03/08 01:39:25 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:
    FragTrap();
    FragTrap& operator=(const FragTrap& otherTrap);
    FragTrap(const FragTrap &otherTrap);
    
public:
    FragTrap(std::string name);
    ~FragTrap();

    void    highFive( void );
};

#endif