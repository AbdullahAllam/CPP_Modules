/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:41:19 by ama10362          #+#    #+#             */
/*   Updated: 2024/05/21 15:57:20 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template< class T >
void    swap( T& a, T& b ) {
    T tmp = a;
    a = b;
    b = tmp;
}

template< class T >
T       min( T& a, T& b ) {
    return ( a < b ? a : b );
}

template< class T >
T       max( T& a, T& b ) {
    return ( a > b ? a : b );
}
#endif