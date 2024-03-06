/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 22:02:33 by ama10362          #+#    #+#             */
/*   Updated: 2024/03/06 22:50:55 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main ( void ) {
    if ( bsp( Point(0, 0), Point(3, 9), Point(6, 0), Point(3, 1) ) == true ) {
        std::cout << "Inside the triangle" << std::endl;
    } else {
        std::cout << "Outside the triangle" << std::endl;
    }
    return 0;
}