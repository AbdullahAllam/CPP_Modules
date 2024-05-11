/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 01:16:40 by ama10362          #+#    #+#             */
/*   Updated: 2024/05/10 15:54:39 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
#define AForm_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
    const std::string   _name;
    bool                _signed;
    const int           _gradeToSign;
    const int           _gradeToExecute;
    AForm();
    AForm( const std::string& name, int gradeToSign );

public:
    AForm( const std::string& name, int gradeToSign, int gradeToExecute );
    AForm( const AForm& src );
    AForm&   operator=( const AForm& rhs );
    virtual ~AForm();

    std::string getName() const;
    bool        getSigned() const;
    int         getGradeToSign() const;
    int         getGradeToExecute() const;      

    void    beSigned( const Bureaucrat& bureaucrat );

    virtual void        execute( const Bureaucrat& executor ) const = 0;

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
    
    class NotSignedException : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };

};
std::ostream&   operator<<( std::ostream& o, const AForm& rhs );

#endif