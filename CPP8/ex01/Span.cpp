/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 16:55:32 by ama10362          #+#    #+#             */
/*   Updated: 2024/06/08 17:54:24 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( unsigned int n ) : n_( n ) {
}

Span::Span( const Span& src ) {
    *this = src;
}

Span& Span::operator=( Span const &rhs ) {
    if ( this != &rhs ) {
        this->n_ = rhs.n_;
        this->my_vector_ = rhs.my_vector_;
    }
    return *this;
}

Span::~Span( void ) {}

void Span::addNumber(int n)
{
    if (my_vector_.size() < (long unsigned int)n)
        my_vector_.push_back(n);
    else
        throw std::out_of_range("You exceeded container size");
}

int Span::longestSpan()
{
    if (my_vector_.size() < 2)
        throw std::out_of_range("Less than two elements");
    std::vector<int> dummy = my_vector_;
    std::sort(dummy.begin(), dummy.end());
    return (dummy[dummy.size() - 1] - dummy[0]);
}

int Span::shortestSpan()
{
    if (my_vector_.size() < 2)
        throw std::out_of_range("Less than two elements");
    std::vector<int> dummy = my_vector_;
    std::sort(dummy.begin(), dummy.end());
    int min = dummy[1] - dummy[0];
    for (unsigned int i = 1; i < dummy.size() - 1; i++)
    {
        if (dummy[i + 1] - dummy[i] < min)
            min = dummy[i + 1] - dummy[i];
    }
    return (min);
}

void Span::fillRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    for (std::vector<int>::iterator it = begin; it != end; it++)
    {
        addNumber(*it);
    }
}
const std::vector< int >* Span::getVector( void ) const {
    return &my_vector_;
}

std::ostream& operator<<( std::ostream& os, const Span& span ) {
    for ( std::vector<int>::const_iterator it = span.getVector()->begin(); it != span.getVector()->end(); ++it )
        os << *it << " ";
    return os;
}