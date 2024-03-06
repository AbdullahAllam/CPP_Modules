/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 22:11:24 by ama10362          #+#    #+#             */
/*   Updated: 2024/03/06 22:13:57 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ) : _x(0), _y(0) {}

Point::Point( const float x, const float y ) : _x(x), _y(y) {}

Point::Point( const Point &myPoint ) : _x(myPoint._x), _y(myPoint._y) {}

Point::~Point() {}

Point&  Point::operator=( const Point &myPoint ) {
    if ( this != &myPoint ) {
        ( Fixed ) this->_x = myPoint.getX();
        ( Fixed ) this->_y = myPoint.getY();
    }
    return *this;
}

Fixed Point::getX( void ) const {
    return this->_x;
}

Fixed Point::getY( void ) const {
    return this->_y;
}