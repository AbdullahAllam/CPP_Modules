/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 16:47:12 by ama10362          #+#    #+#             */
/*   Updated: 2024/06/08 17:58:23 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
Span sp = Span(5);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
std::cout << sp << std::endl;
////////////////////////////////////////////////////////////////////
std::vector<int> sortedList = *sp.getVector();
std::sort(sortedList.begin(), sortedList.end());

std::cout << "Sorted List: ";
for (std::vector<int>::iterator it = sortedList.begin(); it != sortedList.end(); ++it) {
    std::cout << *it << " ";
}
std::cout << std::endl;
////////////////////////////////////////////////////////////////////
std::cout << "\n\n\n My test" <<std::endl;

try {
        std::vector<int> mylist( 10000 );
        std::srand( time ( NULL ) );
        std::generate( mylist.begin(), mylist.end(), std::rand );

        Span span( mylist.size() );

        span.fillRange( mylist.begin(), mylist.end() );

        std::cout << "Longest span: " << span.longestSpan() << std::endl;
        std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
        
    } catch ( std::exception& e ) {
        std::cout << e.what() << std::endl; 
    }

    return 0;
}