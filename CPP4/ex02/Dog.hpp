/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:17:37 by ama10362          #+#    #+#             */
/*   Updated: 2024/03/13 00:46:16 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"

class Dog : public AAnimal
{
private:
    Brain   *_brain;

public:
    Dog( void );
    Dog( std::string type );
    Dog( const Dog& src );
    Dog& operator=( const Dog& src );
    ~Dog( void );

    void   makeSound( void ) const;
};

#endif