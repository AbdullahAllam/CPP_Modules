/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:25:48 by ama10362          #+#    #+#             */
/*   Updated: 2024/03/06 21:33:41 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int                 _fixedValue;
    static const int    _fractionalBits = 8;

public:
    Fixed(void);
    Fixed(const int integer);
    Fixed(const float floatNumber);
    Fixed(const Fixed& number);
    Fixed& operator=(const Fixed& number);
    ~Fixed();
    
    int     getRawBits( void ) const;
    void    setRawBits( int const bits );
    float   toFloat( void ) const;
    int     toInt( void ) const;

    bool    operator>( const Fixed &number ) const ;
    bool    operator<( const Fixed &number ) const ;
    bool    operator>=( const Fixed &number ) const ;
    bool    operator<=( const Fixed &number ) const ;
    bool    operator==( const Fixed &number ) const ;
    bool    operator!=( const Fixed &number ) const ;

    Fixed   operator+( const Fixed &number ) const ;
    Fixed   operator-( const Fixed &number ) const ;
    Fixed   operator*( const Fixed &number ) const ;
    Fixed   operator/( const Fixed &number ) const ;

    Fixed&  operator++(void);
    Fixed   operator++(int );
    Fixed&  operator--(void);
    Fixed   operator--( int );

    static Fixed& min( Fixed &a, Fixed &b );
    static const Fixed& min( const Fixed &a, const Fixed &b );
    static Fixed& max( Fixed &a, Fixed &b );
    static const Fixed& max( const Fixed &a, const Fixed &b );
};
std::ostream & operator<<( std::ostream & stream, Fixed const & fixed );

#endif