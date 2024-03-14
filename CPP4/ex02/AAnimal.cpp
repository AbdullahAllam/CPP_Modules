/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:13:26 by ama10362          #+#    #+#             */
/*   Updated: 2024/03/13 00:45:23 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal( void ) : _type( "AAnimal" ) {
    std::cout << this->_type << " Void Constructor called" << std::endl;
}

AAnimal::AAnimal( std::string type ) : _type( type )
{
    std::cout << "AAnimal " << this->_type << " Constructor Called" << std::endl;
}

AAnimal::AAnimal( const AAnimal& src )
{
    std::cout << "AAnimal Copy Constructor Called" << std::endl;
    *this = src;
}

AAnimal& AAnimal::operator=( const AAnimal& src )
{
    std::cout << "AAnimal Assignment Operator Called" << std::endl;
    if ( this != &src ) {
        this->_type = src._type;
    }
    return *this;
}

AAnimal::~AAnimal( void )
{
    std::cout << "AAnimal Virtual destructor called" << std::endl;
}

void AAnimal::makeSound( void ) const
{
    std::cout << "AAnimal makes sound" << std::endl;
}

std::string    AAnimal::getType( void ) const
{
    return this->_type;
}