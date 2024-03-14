/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:09:10 by ama10362          #+#    #+#             */
/*   Updated: 2024/03/13 00:11:30 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal
{
protected:
    std::string _type;


public:
    Animal( void );
    Animal( std::string type );
    Animal( const Animal& src );
    Animal& operator=( const Animal& src );
    virtual ~Animal( void );
    virtual void    makeSound( void ) const;
    std::string     getType( void ) const; 

};
#endif