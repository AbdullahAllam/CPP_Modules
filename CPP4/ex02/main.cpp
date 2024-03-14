/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:06:05 by ama10362          #+#    #+#             */
/*   Updated: 2024/03/13 01:14:46 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main( void )
{
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();
    
    delete j;//should not create a leak
    delete i;
    
    Dog original;
    {
        Dog deepCopy = original;
    }
    
    const AAnimal* animalsArray[6] = { new Dog(), new Dog(), new Dog(), new Cat(), new Cat(), new Cat() };
    for ( int i = 0; i < 6; i++ ) {
        delete animalsArray[i];
    }

    return 0;
}