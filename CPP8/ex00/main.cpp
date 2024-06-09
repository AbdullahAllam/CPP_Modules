/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 14:49:22 by ama10362          #+#    #+#             */
/*   Updated: 2024/06/08 15:32:44 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main( int argc, char ** argv )
{
    if ( argc != 2 )
    {
        std::cout << "Insert a number to find" << std::endl;
        return 1;
    }
    int myList[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::vector< int >vect( myList, myList + sizeof( myList ) / sizeof( int ) );
    std::list< int >list( myList, myList + sizeof( myList ) / sizeof( int ) );
    std::deque< int >deque( myList, myList + sizeof( myList ) / sizeof( int ) );

    
    easyfind( vect, std::atoi( argv[1] ));
    easyfind( list, std::atoi( argv[1] ));
    easyfind( deque, std::atoi( argv[1] ));

    return 0;
}