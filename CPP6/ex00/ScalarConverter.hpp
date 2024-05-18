/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 13:36:18 by ama10362          #+#    #+#             */
/*   Updated: 2024/05/18 13:41:40 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP_
# define SCALARCONVERTER_HPP_

# include <string>
#include <iostream>
#include <cstdlib>
#include <cctype>
#include <cerrno>
#include <limits>
#include <sstream>

class ScalarConverter 
{
	public:

		~ScalarConverter();

		static void convert(const std::string& literal);
	
	private:

		ScalarConverter();
		ScalarConverter(const ScalarConverter& other);
		ScalarConverter& operator=(const ScalarConverter& other);
};

#endif