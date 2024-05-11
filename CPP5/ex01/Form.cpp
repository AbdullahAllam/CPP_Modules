/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 01:46:08 by ama10362          #+#    #+#             */
/*   Updated: 2024/05/09 01:46:09 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( const std::string& name, int gradeToSign, int gradeToExecute) : _name( name ), _gradeToSign( gradeToSign ), _gradeToExecute( gradeToExecute ) {
    if ( gradeToSign < 1 || gradeToExecute < 1)
        throw Form::GradeTooHighException();
    if ( gradeToSign > 150 || gradeToExecute > 150)
        throw Form::GradeTooLowException();
}

Form::Form( const Form& src ) : _name( src.getName() ), _gradeToSign( src.getGradeToSign() ), _gradeToExecute( src.getGradeToExecute() ) {}

Form&  Form::operator=( const Form& rhs ) {
    if ( this != &rhs )
        _signed = rhs.getSigned();
    return *this;
}

Form::~Form() {}

std::string Form::getName() const {
    return _name;
}

bool   Form::getSigned() const {
    return _signed;
}

int   Form::getGradeToSign() const {
    return _gradeToSign;
}

int   Form::getGradeToExecute() const {
    return _gradeToExecute;
}


void    Form::beSigned(const Bureaucrat& bureaucrat) {
    if ( bureaucrat.getGrade() > this->_gradeToSign )
        throw Form::GradeTooLowException();
    _signed = true;
}

const char *Form::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low");
};

const char *Form::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high");
};

std::ostream&   operator<<( std::ostream& o, const Form& rhs ) {
    o << "------------- Form attributes -------------" << std::endl;
    o << "Form name: " << rhs.getName() << std::endl
      << "Grade to sign: " << rhs.getGradeToSign() << std::endl
      << "Grade to execute: " << rhs.getGradeToExecute();
    return o;
}