/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 13:02:19 by ama10362          #+#    #+#             */
/*   Updated: 2024/05/23 15:27:13 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define USE_MAIN_1

#ifdef USE_MAIN_1
#include "Array.hpp"
#define MAX_VAL 750
int main(int, char**)
{
    Array<float> numbers(MAX_VAL);
    float* mirror = new float[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const float value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<float> tmp = numbers;
        Array<float> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] =  (std::rand() % 1000 + 1)/100.0f;

    }
    std::cout << "First element " << numbers[0] << std::endl; 
    delete [] mirror;//
    return 0;
}
#endif

#ifndef USE_MAIN_1
#include "Array.hpp"

#define SIZE 10

int main( void )
{
    std::cout << "-----------------------------------------------------" << std::endl;

    Array< float > test;

    Array< int > intArray( SIZE );
    Array< int > intArray2( SIZE - 5 );

    for ( unsigned int i = 0; i < intArray.size(); i++ )
        intArray[i] = i * 2;

    std::cout << "Int Array 1: " << intArray << std::endl;

    intArray2 = intArray;

    std::cout << "int Array 2: " << intArray2 << std::endl;

    try {
        std::cout << "Accessing a valid index: " << intArray[5] << std::endl;
        std::cout << "Accessing an invalid index: \n" << intArray[SIZE] << std::endl;
    } catch ( const std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    std::cout << "-----------------------------------------------------" << std::endl;

    return ( 0 );
}
#endif