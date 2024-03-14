/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:09:10 by ama10362          #+#    #+#             */
/*   Updated: 2024/03/13 00:49:01 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class AAnimal
{
protected:
    std::string _type;


public:
    AAnimal( void );
    AAnimal( std::string type );
    AAnimal( const AAnimal& src );
    AAnimal& operator=( const AAnimal& src );
    virtual ~AAnimal( void );
    virtual void    makeSound( void ) const = 0;
    std::string     getType( void ) const; 

};
#endif