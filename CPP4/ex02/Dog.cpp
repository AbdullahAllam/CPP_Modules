/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 22:01:29 by ama10362          #+#    #+#             */
/*   Updated: 2024/03/13 00:47:25 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : AAnimal( "Dog" )
{
    std::cout << this->_type << " Dog Void Constructor Called" << std::endl;
    try 
    {
        this->_brain = new Brain();
    }
    catch (const std::bad_alloc& reason) {
        std::cout << "Memory Allocation failed : " << reason.what() << std::endl;
    }
}

Dog::Dog( std::string type ) : AAnimal(type)
{
    std::cout << "Dog " << this->_type << " Constructor Called" << std::endl;
    try {
        this->_brain = new Brain();
    }
    catch (const std::bad_alloc& reason) {
        std::cout << "Memory Allocation failed : " << reason.what() << std::endl;
    }
}

Dog::Dog( const Dog& src ) : AAnimal(src._type)
{
    std::cout << "Dog Secondary Copy Constructor Called" << std::endl;
    *this = src;
}

Dog& Dog::operator=( const Dog& src )
{
    std::cout << "Dog Assignment Operator Called" << std::endl;
    if ( this != &src ) {
        this->_type = src._type;
        this->_brain = new Brain( *src._brain );
    }
    return *this;
}

Dog::~Dog( void )
{
    std::cout << this->_type << " Dog Destructor Called" << std::endl;
    delete  this->_brain;
}

void    Dog::makeSound( void ) const
{
    std::cout << "Dog Is Barking " << std::endl;
}