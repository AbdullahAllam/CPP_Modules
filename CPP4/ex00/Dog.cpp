/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 22:01:29 by ama10362          #+#    #+#             */
/*   Updated: 2024/03/13 00:25:45 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal( "Dog" )
{
    std::cout << this->_type << " Dog Void Constructor Called" << std::endl;
}

Dog::Dog( std::string type ) : Animal(type)
{
    std::cout << "Dog " << this->_type << " Constructor Called" << std::endl;
}

Dog::Dog( const Dog& src ) : Animal(src._type)
{
    std::cout << "Dog Secondary Copy Constructor Called" << std::endl;
    *this = src;
}

Dog& Dog::operator=( const Dog& src )
{
    std::cout << "Dog Assignment Operator Called" << std::endl;
    if ( this != &src ) {
        this->_type = src._type;
    }
    return *this;
}

Dog::~Dog( void )
{
    std::cout << this->_type << " Dog Destructor Called" << std::endl;
}

void    Dog::makeSound( void ) const
{
    std::cout << "Dog Is Barking " << std::endl;
}