/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 22:19:45 by ama10362          #+#    #+#             */
/*   Updated: 2024/03/13 00:25:34 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal("Cat")
{
    std::cout << this->_type << " Cat void constructor called" << std::endl;
}

Cat::Cat( std::string type ) : Animal(type)
{
    std::cout << "Cat " << this->_type << " Constructor Called" << std::endl;
}

Cat::Cat( const Cat& src ) : Animal(src._type)
{
    std::cout << "Cat Secondary Copy Constructor Called" << std::endl;
    *this = src;
}

Cat& Cat::operator=( const Cat& src )
{
    std::cout << "Cat Assignment Operator Called" << std::endl;
    if ( this != &src ) {
        this->_type = src._type;
    }
    return *this;
}

Cat::~Cat( void )
{
    std::cout << this->_type << " Cat destructor called" << std::endl;
}

void    Cat::makeSound( void ) const
{
    std::cout << "Cat is Meowing!" << std::endl;
}