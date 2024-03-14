/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:36:40 by ama10362          #+#    #+#             */
/*   Updated: 2024/03/13 00:12:39 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
private:
    Brain   *_brain;
    
public:
    Cat( void );
    Cat( std::string type );
    Cat( const Cat& src );
    Cat& operator=( const Cat& src );
    ~Cat( void );

    void   makeSound( void ) const;
};

#endif