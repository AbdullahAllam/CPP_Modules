/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 16:37:48 by ama10362          #+#    #+#             */
/*   Updated: 2024/05/18 16:43:03 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Classes.hpp"

Base::~Base() {}

Base* generate() 
{
	std::srand(time(NULL));

	int n = rand() % 3;
	switch (n) {
		case 0:
			std::cout << "A class generated" << std::endl;
			return new A;
		case 1:
			std::cout << "B class generated" << std::endl;
			return new B;
		case 2:
			std::cout << "C class generated" << std::endl;
			return new C;
	}

	std::cout << "Can't generate a class" << std::endl;
	return NULL;
}

void identify(Base* p) 
{
	if (dynamic_cast<A*>(p) != NULL) 
	{
		std::cout << "A class was identified by Pointer " << std::endl;
	} 
	else if (dynamic_cast<B*>(p) != NULL) 
	{
		std::cout << "B class was identified by Pointer" << std::endl;
	} 
	else if (dynamic_cast<C*>(p) != NULL) 
	{
		std::cout << "C class was identified by Pointer" << std::endl;
	} 
	else 
	{
		std::cout << "Can't identify the class" << std::endl;
	}
}

void identify(Base& p) 
{
	try 
	{
		A& aux = dynamic_cast<A&>(p); (void)aux;
		std::cout << "A class was identified by Reference" << std::endl;
		return;
	} 
	
	catch (...) {}

	try 
	{
		B& aux = dynamic_cast<B&>(p); (void)aux;
		std::cout << "B class was identified by Reference" << std::endl;
		return;
	} 
	
	catch (...) {}

	try 
	{
		C& aux = dynamic_cast<C&>(p); (void)aux;
		std::cout << "C class was identified by Reference" << std::endl;
		return;
	} 
	
	catch (...) {}

	std::cout << "Can't identify the class" << std::endl;
}

int main() 
{
	Base *base;

	base = generate();
	identify(base);
	identify(*base);

	return 0;
}