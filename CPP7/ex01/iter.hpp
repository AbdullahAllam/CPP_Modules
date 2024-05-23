/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 16:21:14 by ama10362          #+#    #+#             */
/*   Updated: 2024/05/21 16:26:09 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include "iostream"

template < typename T >
void    iter( T *arr, size_t size, void (*f)(T &) )
{
    for ( size_t i = 0; i < size; i++ )
        f( arr[i] );
}

template < typename T >
void    printWhatever( T &i )
{
    std::cout << i << std::endl;
}

#endif