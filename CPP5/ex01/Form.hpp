/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 01:16:40 by ama10362          #+#    #+#             */
/*   Updated: 2024/05/09 01:50:19 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    const std::string   _name;
    bool                _signed;
    const int           _gradeToSign;
    const int           _gradeToExecute;
    Form();
    Form( const std::string& name, int gradeToSign );

public:
    Form( const std::string& name, int gradeToSign, int gradeToExecute );
    Form( const Form& src );
    Form&   operator=( const Form& rhs );
    ~Form();

    std::string getName() const;
    bool        getSigned() const;
    int         getGradeToSign() const;
    int         getGradeToExecute() const;      

    void        beSigned( const Bureaucrat& bureaucrat );

    class GradeTooLowException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

};
std::ostream&   operator<<( std::ostream& o, const Form& rhs );

#endif