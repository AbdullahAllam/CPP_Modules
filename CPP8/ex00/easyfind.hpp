/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 14:42:11 by ama10362          #+#    #+#             */
/*   Updated: 2024/06/08 15:32:38 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASY_FIND_H
#define EASY_FIND_H

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <set>
#include <algorithm>
#include <iterator>
#include <string>

template <typename T>
void easyfind(T& cont_to_search, int toFind)
{
    if ( std::find( cont_to_search.begin(), cont_to_search.end(), toFind ) != cont_to_search.end() )
        std::cout << "Found the number." << std::endl;
    else
        std::cout << "Not there." << std::endl;
}

#endif