/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 01:46:08 by ama10362          #+#    #+#             */
/*   Updated: 2024/05/09 01:46:09 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm( const std::string& name, int gradeToSign, int gradeToExecute) : _name( name ), _gradeToSign( gradeToSign ), _gradeToExecute( gradeToExecute ) {
    if ( gradeToSign < 1 || gradeToExecute < 1)
        throw AForm::GradeTooHighException();
    if ( gradeToSign > 150 || gradeToExecute > 150)
        throw AForm::GradeTooLowException();
}

AForm::AForm( const AForm& src ) : _name( src.getName() ), _gradeToSign( src.getGradeToSign() ), _gradeToExecute( src.getGradeToExecute() ) {}

AForm&  AForm::operator=( const AForm& rhs ) {
    if ( this != &rhs )
        _signed = rhs.getSigned();
    return *this;
}

AForm::~AForm() {}

std::string AForm::getName() const {
    return _name;
}

bool   AForm::getSigned() const {
    return _signed;
}

int   AForm::getGradeToSign() const {
    return _gradeToSign;
}

int   AForm::getGradeToExecute() const {
    return _gradeToExecute;
}


void    AForm::beSigned(const Bureaucrat& bureaucrat) {
    if ( bureaucrat.getGrade() > this->_gradeToSign )
        throw AForm::GradeTooLowException();
    _signed = true;
}

const char *AForm::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low");
};

const char *AForm::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high");
};

const char *AForm::NotSignedException::what(void) const throw()
{
    return "Form not signed";
};

std::ostream&   operator<<( std::ostream& o, const AForm& rhs ) {
    o << "------------- AForm attributes -------------" << std::endl;
    o << "AForm name: " << rhs.getName() << std::endl
      << "Grade to sign: " << rhs.getGradeToSign() << std::endl
      << "Grade to execute: " << rhs.getGradeToExecute();
    return o;
}