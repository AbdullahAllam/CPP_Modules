/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 16:22:52 by ama10362          #+#    #+#             */
/*   Updated: 2024/05/10 16:31:35 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( const std::string& target ) : AForm( "ShrubberyCreationForm", 145, 137 ), _target( target ) {}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& src ) : AForm( src ), _target( src._target ) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=( ShrubberyCreationForm& rhs ) {
    (void)rhs;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void    ShrubberyCreationForm::execute( const Bureaucrat& executor ) const {
    if ( this->getSigned() == false )
        throw AForm::NotSignedException();
    else if ( executor.getGrade() > this->getGradeToExecute() ) {
        throw AForm::GradeTooLowException();
    }

    std::ofstream file((_target + "_shrubbery").c_str());
    file << "       /\\" << std::endl;
    file << "      //\\\\" << std::endl;
    file << "     //  \\\\" << std::endl;
    file << "    //    \\\\" << std::endl;
    file << "   //______\\\\" << std::endl;
    file << "  //________\\\\" << std::endl;
    file << " //__________\\\\" << std::endl;
    file << "//____________\\\\" << std::endl;
    file << "      ||||" << std::endl;
    file << "      ||||" << std::endl;
    file << "      ||||" << std::endl;
    file << "      ||||" << std::endl;
    file.close();
}