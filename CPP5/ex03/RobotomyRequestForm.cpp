#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& target ) : AForm("Robotomy Form", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src ) : AForm(src), _target(src._target) {}

RobotomyRequestForm&    RobotomyRequestForm::operator=( RobotomyRequestForm& rhs ) {
    ( void )rhs;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void    RobotomyRequestForm::execute(const Bureaucrat& executor) const {
    if ( executor.getGrade() > this->getGradeToExecute() )
        throw AForm::GradeTooLowException();
    else {
        static int  i;
        if ( i % 2 == 0 )
            std::cout << "ZZZZZZZZZZZZZZZZZZZZZT! " << _target << " has been robotomized!" << std::endl;
        else
            std::cout << "Robotomy failed!" << std::endl;
        i++;
    }
}