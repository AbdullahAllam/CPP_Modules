/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 17:01:44 by ama10362          #+#    #+#             */
/*   Updated: 2024/02/25 17:14:27 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

int main()
{
    std::string     myString  = "HI THIS IS BRAIN";
    std::string*    stringPTR = &myString;
    std::string&    stringREF = myString;

    std::cout << &myString << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;
    std::cout << std::endl;
    std::cout << myString << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;
    
    return (0);
}