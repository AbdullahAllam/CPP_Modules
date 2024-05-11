/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 00:16:08 by ama10362          #+#    #+#             */
/*   Updated: 2024/05/09 00:54:49 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main( void )
{
    try {
        Bureaucrat bureaucrat("allam", 1);
        // Bureaucrat bureaucrat("allam", 200);
        std::cout << bureaucrat << std::endl;
        // bureaucrat.decrementGrade();
        bureaucrat.incrementGrade();
        std::cout << bureaucrat << std::endl;

    // } catch (Bureaucrat::GradeTooLowException &e) {
    } catch (Bureaucrat::GradeTooHighException &e) {
        std::cout << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}