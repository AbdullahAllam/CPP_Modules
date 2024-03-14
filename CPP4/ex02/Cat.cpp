/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 22:19:45 by ama10362          #+#    #+#             */
/*   Updated: 2024/03/13 00:46:03 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : AAnimal("Cat")
{
    std::cout << this->_type << " Cat void constructor called" << std::endl;
    try {
        this->_brain = new Brain();
    }
    catch (const std::bad_alloc& reason) {
        std::cout << "Memory Allocation failed : " << reason.what() << std::endl;
    }
}

Cat::Cat( std::string type ) : AAnimal(type)
{
    std::cout << "Cat " << this->_type << " Constructor Called" << std::endl;
    try {
        this->_brain = new Brain();
    }
    catch (const std::bad_alloc& reason) {
        std::cout << "Memory Allocation failed : " << reason.what() << std::endl;
    }
}

Cat::Cat( const Cat& src ) : AAnimal(src._type)
{
    std::cout << "Cat Secondary Copy Constructor Called" << std::endl;
    *this = src;
}

Cat& Cat::operator=( const Cat& src )
{
    std::cout << "Cat Assignment Operator Called" << std::endl;
    if ( this != &src ) {
        this->_type = src._type;
        this->_brain = new Brain( *src._brain );
    }
    return *this;
}

Cat::~Cat( void )
{
    std::cout << this->_type << " Cat destructor called" << std::endl;
    delete  this->_brain;
}

void    Cat::makeSound( void ) const
{
    std::cout << "Cat is Meowing!" << std::endl;
}