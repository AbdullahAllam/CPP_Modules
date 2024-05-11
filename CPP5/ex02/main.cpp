/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 16:27:19 by ama10362          #+#    #+#             */
/*   Updated: 2024/05/10 16:35:37 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main( void )
{

    try {
        Bureaucrat bureaucrat("allam", 2);
        ShrubberyCreationForm formA("Shrubbery");
        RobotomyRequestForm formB("Robotomy");
        PresidentialPardonForm formC("President");

        std::cout << "\n---------------Shrubbery---------------" << std::endl;
        bureaucrat.signForm(formA);
        bureaucrat.executeForm(formA);
        std::cout << "\n---------------Robotomy---------------" << std::endl;
        bureaucrat.signForm(formB);
        bureaucrat.executeForm(formB);
        bureaucrat.executeForm(formB);
        bureaucrat.executeForm(formB);
        bureaucrat.executeForm(formB);
        std::cout << "\n---------------President---------------" << std::endl;
        bureaucrat.signForm(formC);
        bureaucrat.executeForm(formC);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}