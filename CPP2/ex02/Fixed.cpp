/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:43:56 by ama10362          #+#    #+#             */
/*   Updated: 2024/03/06 20:52:51 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void) : _fixedValue(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int integer) : _fixedValue( integer << _fractionalBits ) {
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float floatNumber) : _fixedValue( roundf( floatNumber * ( 1 << _fractionalBits ) ) ) {
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& number)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = number;    
}

Fixed& Fixed::operator=(const Fixed& number)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if ( this != &number )
        this->_fixedValue = number.getRawBits();
    return *this;    
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    return this->_fixedValue;
}

void    Fixed::setRawBits(int const bits)
{
    this->_fixedValue = bits;
}

float   Fixed::toFloat( void ) const {
    return static_cast<float>( this->getRawBits() ) / ( 1 << _fractionalBits );
}

int     Fixed::toInt(void) const 
{
    return this->_fixedValue >> _fractionalBits;
}

bool    Fixed::operator>( const Fixed &number ) const {
    return this->getRawBits() > number.getRawBits();
}

bool    Fixed::operator<( const Fixed &number ) const {
    return this->getRawBits() < number.getRawBits();
}

bool    Fixed::operator>=( const Fixed &number ) const {
    return this->getRawBits() >= number.getRawBits();
}

bool   Fixed::operator<=( const Fixed &number ) const {
    return this->getRawBits() <= number.getRawBits();
}

bool  Fixed::operator==( const Fixed &number ) const {
    return this->getRawBits() == number.getRawBits();
}

bool    Fixed::operator!=( const Fixed &number ) const {
    return this->getRawBits() != number.getRawBits();
}


Fixed   Fixed::operator+( const Fixed &number ) const {
    return Fixed( this->toFloat() + number.toFloat() );
}

Fixed   Fixed::operator-( const Fixed &number ) const {
    return Fixed( this->toFloat() - number.toFloat() );
}

Fixed   Fixed::operator*( const Fixed &number ) const {
    return Fixed( this->toFloat() * number.toFloat() );
}

Fixed   Fixed::operator/( const Fixed &number ) const {
    return Fixed( this->toFloat() / number.toFloat() );
}

Fixed&   Fixed::operator++( void ) {
    ++this->_fixedValue;
    return *this;
}

Fixed   Fixed::operator++( int ) {
    Fixed tmp( *this );
    tmp._fixedValue = this->_fixedValue++;
    return tmp;
}

Fixed& Fixed::operator--( void ) {
    --this->_fixedValue;
    return *this;
}

Fixed Fixed::operator--( int ) {
    Fixed tmp( *this );
    tmp._fixedValue = this->_fixedValue--;
    return tmp;
}

Fixed& Fixed::min( Fixed &a, Fixed &b ) {
    if ( a.getRawBits() < b.getRawBits() )
        return a;
    return b;
}

const Fixed& Fixed::min( const Fixed &a, const Fixed &b ) {
    if ( a.getRawBits() < b.getRawBits() )
        return a;
    return b;
}

Fixed& Fixed::max( Fixed &a, Fixed &b ) {
    if ( a.getRawBits() > b.getRawBits() )
        return a;
    return b;
}

const Fixed& Fixed::max( const Fixed &a, const Fixed &b ) {
    if ( a.getRawBits() > b.getRawBits() )
        return a;
    return b;
}

std::ostream& operator<<( std::ostream & stream, Fixed const & fixed )
{
    stream << fixed.toFloat();
    return stream;
}