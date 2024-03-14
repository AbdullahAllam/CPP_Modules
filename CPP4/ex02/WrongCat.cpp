/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 22:44:57 by ama10362          #+#    #+#             */
/*   Updated: 2024/03/12 22:46:19 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal("WrongCat")
{
    std::cout << this->_type << " WrongCat void constructor called" << std::endl;
}

WrongCat::WrongCat( std::string type ) : WrongAnimal(type)
{
    std::cout << "WrongCat " << this->_type << " Constructor Called" << std::endl;
}

WrongCat::WrongCat( const WrongCat& src ) : WrongAnimal(src._type)
{
    std::cout << "WrongCat Secondary Copy Constructor Called" << std::endl;
    *this = src;
}

WrongCat& WrongCat::operator=( const WrongCat& src )
{
    std::cout << "WrongCat Assignment Operator Called" << std::endl;
    if ( this != &src ) {
        this->_type = src._type;
    }
    return *this;
}

WrongCat::~WrongCat( void )
{
    std::cout << this->_type << " WrongCat destructor called" << std::endl;
}

void    WrongCat::makeSound( void ) const
{
    std::cout << "WrongCat is Meowing!" << std::endl;
}