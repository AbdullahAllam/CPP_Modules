/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 22:17:20 by ama10362          #+#    #+#             */
/*   Updated: 2024/03/06 22:48:58 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed absolute(Fixed x) {
    return (x < 0) ? x*-1 : x;
}

Fixed calculateTriangleArea(const Point& a, const Point& b, const Point& c) {
    return absolute((a.getX() * (b.getY() - c.getY())) +
                    (b.getX() * (c.getY() - a.getY())) +
                    (c.getX() * (a.getY() - b.getY()))) / 2;
}

bool bsp( Point const a, Point const b, Point const c, Point const point )
{
    Fixed abcArea = calculateTriangleArea(a, b, c);
    Fixed pabArea = calculateTriangleArea(point, a, b);
    Fixed pbcArea = calculateTriangleArea(point, b, c);
    Fixed pcaArea = calculateTriangleArea(point, c, a);
    std::cout << abcArea << std::endl << pabArea<< std::endl <<pbcArea<< std::endl <<pcaArea<< std::endl;

    return (abcArea == pabArea + pbcArea + pcaArea);
}
