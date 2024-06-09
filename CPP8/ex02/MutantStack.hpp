/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 18:25:08 by ama10362          #+#    #+#             */
/*   Updated: 2024/06/09 15:51:58 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANSTACK_HPP
# define MUTANSTACK_HPP

#include <iostream>
#include <algorithm>
#include <list>
#include <stack>
#include <deque>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack() : std::stack<T>() {}
        MutantStack(MutantStack const & src) : std::stack<T>(src) { *this = src;}

        MutantStack&    operator=( const MutantStack& rhs ) {
        std::stack< T >::operator=( rhs );
        return *this;
        }

        virtual ~MutantStack() {}

        typedef typename std::deque<T>::iterator iterator;
        iterator begin()
        {
            return this->c.begin();
        }

        iterator end()
        {
            return this->c.end();
        }

};

#endif