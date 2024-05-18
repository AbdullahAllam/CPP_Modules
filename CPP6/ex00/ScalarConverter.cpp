/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 13:37:29 by ama10362          #+#    #+#             */
/*   Updated: 2024/05/18 14:44:04 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& other) { *this = other; }

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other) { (void)other; return *this; }

void ScalarConverter::convert(const std::string& literal) 
{
std::string specialTypes[6] = 
	{
		"-inff", "+inff", "nanf",
		"-inf", "+inf", "nan"
	};
	std::string toChar = "";
	int toInt = 0;
	float toFloat = 0;
	double toDouble = 0;

    
	if (literal.size() == 1 && std::isprint(literal[0]) && !std::isdigit(literal[0])) 
	{
		toChar = literal[0];
		std::cout << "char: " << toChar << std::endl;
		std::cout << "int: " << static_cast<int>(toChar[0]) << std::endl;
		std::cout << "float: " << static_cast<float>(toChar[0]) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(toChar[0]) << ".0" << std::endl;
		return;
	}
    
	for (int i = 0; i < 6; ++i) 
	{
		if (literal == specialTypes[i]) 
		{
			toChar = "impossible"; break;
		}
	}
    
	toInt = std::atoi(literal.c_str());

	if (literal[literal.length() - 1] == 'f') 
	{
		toFloat = std::atof(literal.c_str());
		toDouble = static_cast<double>(toFloat);
	} else 
	{
		toDouble = std::atof(literal.c_str());
		toFloat = static_cast<float>(toDouble);
	}


	if (toChar == "" && std::isprint(toInt)) 
	{
		toChar = "'";
		toChar += static_cast<char>(toInt);
		toChar += "'";
	} 
	else if (toChar == "") 
	{
		toChar = "Non displayable";
	}

	std::cout << "char: " << toChar << std::endl;
	if (toChar == "impossible") 
	{
		std::cout << "int: impossible" << std::endl;
	} 
	else 
	{
		std::cout << "int: " << toInt << std::endl;
	}

	if (toChar != "impossible" && toFloat - static_cast<int>(toFloat) == 0) 
	{
		std::cout << "float: " << toFloat << ".0f" << std::endl;
		std::cout << "double: " << toDouble << ".0" << std::endl;
	} 
	else 
	{
		std::cout << "float: " << toFloat << "f" << std::endl;
		std::cout << "double: " << toDouble << std::endl;
	}

}
