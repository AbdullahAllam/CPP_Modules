/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 00:15:16 by ama10362          #+#    #+#             */
/*   Updated: 2024/05/09 00:15:17 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{

private:
    Bureaucrat();
    const std::string   _name;
    int                 _grade;
    

public:
    Bureaucrat( const std::string& name, int grade );
    Bureaucrat( const Bureaucrat& src );
    Bureaucrat& operator=( const Bureaucrat& rhs );
    ~Bureaucrat();

    void        incrementGrade();
    void        decrementGrade();

    std::string getName() const;
    int         getGrade() const;

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

std::ostream&   operator<<( std::ostream& o, const Bureaucrat& rhs );

#endif