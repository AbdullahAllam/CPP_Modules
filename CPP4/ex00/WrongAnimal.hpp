/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 22:41:11 by ama10362          #+#    #+#             */
/*   Updated: 2024/03/12 22:41:50 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:
    std::string _type;


public:
    WrongAnimal( void );
    WrongAnimal( std::string type );
    WrongAnimal( const WrongAnimal& src );
    WrongAnimal& operator=( const WrongAnimal& src );
    ~WrongAnimal( void );
    void    makeSound( void ) const;
    std::string     getType( void ) const; 

};
#endif