/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 23:33:35 by ama10362          #+#    #+#             */
/*   Updated: 2024/03/06 00:04:58 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->_fixed = 0;
}

Fixed::Fixed(Fixed &number)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = number;    
}

Fixed& Fixed::operator=( const Fixed &number )
{
    std::cout << "Copy assignment operator called" << std::endl << std::flush;
    if (this != &number)
        this->_fixed = number.getRawBits();
    return *this;   
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fixed;
}

void    Fixed::setRawBits( int const raw ) {
    this->_fixed = raw;
}