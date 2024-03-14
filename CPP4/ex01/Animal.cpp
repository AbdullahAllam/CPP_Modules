/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:13:26 by ama10362          #+#    #+#             */
/*   Updated: 2024/03/12 22:01:15 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) : _type( "Animal" ) {
    std::cout << this->_type << " Void Constructor called" << std::endl;
}

Animal::Animal( std::string type ) : _type( type )
{
    std::cout << "Animal " << this->_type << " Constructor Called" << std::endl;
}

Animal::Animal( const Animal& src )
{
    std::cout << "Animal Copy Constructor Called" << std::endl;
    *this = src;
}

Animal& Animal::operator=( const Animal& src )
{
    std::cout << "Animal Assignment Operator Called" << std::endl;
    if ( this != &src ) {
        this->_type = src._type;
    }
    return *this;
}

Animal::~Animal( void )
{
    std::cout << "Animal Virtual destructor called" << std::endl;
}

void Animal::makeSound( void ) const
{
    std::cout << "Animal makes sound" << std::endl;
}

std::string    Animal::getType( void ) const
{
    return this->_type;
}