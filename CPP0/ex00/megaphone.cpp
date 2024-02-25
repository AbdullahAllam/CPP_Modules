/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 22:47:20 by ama10362          #+#    #+#             */
/*   Updated: 2024/02/20 23:02:56 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for (int words = 1; argv[words]; words++)
        {
            for (int chars = 0; argv[words][chars]; chars++)
                std::cout << (char)toupper(argv[words][chars]);
            if (words < argc - 1)
                std::cout << " ";
            else
                std::cout << "" << std::endl;
        }
    }

    return (0);
}