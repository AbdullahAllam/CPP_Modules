/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 16:47:50 by ama10362          #+#    #+#             */
/*   Updated: 2024/06/08 17:54:30 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <set>
#include <algorithm>
#include <iterator>
#include <string>

class Span
{
    private:
        std::vector<int> my_vector_;
        unsigned int n_;
    public:
        Span(unsigned int n);
        Span(const Span &src);
        ~Span();
        Span &operator=(const Span &rhs);
        void addNumber(int n);
        int shortestSpan();
        int longestSpan();
        void fillRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        const std::vector< int >* getVector( void )const;
};

std::ostream& operator<<( std::ostream&, const Span& );

#endif