/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 23:33:31 by ama10362          #+#    #+#             */
/*   Updated: 2024/03/05 23:43:40 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
private:
    int                 _fixed;
    static const int    _fractional = 8;
    
public:
    Fixed();
    Fixed(Fixed &number);
    Fixed& operator=( const Fixed &rhs );
    ~Fixed();
    int getRawBits( void ) const;
    void setRawBits( int const raw );

};

#endif