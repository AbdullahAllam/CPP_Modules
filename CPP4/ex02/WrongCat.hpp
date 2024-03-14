/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 22:44:00 by ama10362          #+#    #+#             */
/*   Updated: 2024/03/12 22:44:35 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:

public:
    WrongCat( void );
    WrongCat( std::string type );
    WrongCat( const WrongCat& src );
    WrongCat& operator=( const WrongCat& src );
    ~WrongCat( void );

    void   makeSound( void ) const;
};

#endif