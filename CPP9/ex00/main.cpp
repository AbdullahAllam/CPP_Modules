/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 21:25:34 by ama10362          #+#    #+#             */
/*   Updated: 2024/06/09 21:26:51 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{

	if (argc != 2)
	{
		std::cout << "Wrong Number of Arguments!" << std::endl;
		return (1);
	}

	BitcoinExchange my_exchange;

	my_exchange.calc(argv[1]);

	return (0);
}