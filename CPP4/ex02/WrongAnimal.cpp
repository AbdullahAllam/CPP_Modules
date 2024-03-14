/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 22:42:02 by ama10362          #+#    #+#             */
/*   Updated: 2024/03/12 22:43:04 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : _type( "WrongAnimal" ) {
    std::cout << this->_type << " Void Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( std::string type ) : _type( type )
{
    std::cout << "WrongAnimal " << this->_type << " Constructor Called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& src )
{
    std::cout << "WrongAnimal Copy Constructor Called" << std::endl;
    *this = src;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& src )
{
    std::cout << "WrongAnimal Assignment Operator Called" << std::endl;
    if ( this != &src ) {
        this->_type = src._type;
    }
    return *this;
}

WrongAnimal::~WrongAnimal( void )
{
    std::cout << "WrongAnimal Virtual destructor called" << std::endl;
}

void WrongAnimal::makeSound( void ) const
{
    std::cout << "WrongAnimal makes sound" << std::endl;
}

std::string    WrongAnimal::getType( void ) const
{
    return this->_type;
}