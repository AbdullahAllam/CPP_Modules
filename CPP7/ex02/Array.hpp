/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 13:02:15 by ama10362          #+#    #+#             */
/*   Updated: 2024/05/23 15:33:58 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <ctime>
# include <cstdlib>
#include <iostream>

template < typename T >
class Array {

private:
    T*              _array;
    unsigned int    _size;

public:
    Array( void ) : _array( new T() ), _size( 0 ) {};
    Array( unsigned int n ) : _array( new T[n]() ), _size( n ) {};
    Array( const Array& rhs ) : _array( new T[rhs.size()]() ), _size( rhs.size() ) {
        for ( unsigned int i( 0 ); i < _size; i++ )
            _array[i] = rhs._array[i];
    };

    Array& operator=( const Array& rhs ) {
        if ( this != &rhs ) {
            delete [] _array;
            _array = new T[rhs.size()]();
            _size = rhs._size;
            for ( unsigned int i( 0 ); i < _size; i++ )
                _array[i] = rhs._array[i];
        }
        return *this;
    }

    T& operator[]( unsigned int i ) const {
        if ( i >= _size )
            throw OFBException();
        return _array[i];
    }

    unsigned int  size( void ) const { return _size; }

    ~Array( void ) { delete [] _array; }

    class OFBException : public std::exception {
        public:
            virtual const char* what() const throw() { return "Index out of Bounds !!";}
    };
};

template < typename T >
std::ostream& operator<<( std::ostream& out, const Array<T>& arr ) {
    for ( unsigned int i( 0 ); i < arr.size(); i++ )
        out << arr[i] << " ";
    return out;
}
#endif