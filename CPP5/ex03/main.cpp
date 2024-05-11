/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 16:27:19 by ama10362          #+#    #+#             */
/*   Updated: 2024/05/11 14:50:06 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

using std::cout;
using std::endl;

int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;

	AForm *a;
	AForm *b;
	AForm *c;

	cout << endl;

	Intern allam;

	a = allam.makeForm("robotomy", "X");
	cout << endl;
	b = allam.makeForm("presidential", "X");
	cout << endl;
	c = allam.makeForm("shrubbery", "X");
	cout << endl;

	allam.makeForm("foo", "Ebil");
	cout << endl;

	delete a;
	delete b;
	delete c;
	return 0;
}