#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern( const Intern& src ) {
    *this = src;
}

Intern& Intern::operator=( const Intern& rhs ) {
    ( void ) rhs;
    return (*this);
}

Intern::~Intern() {}

AForm* Intern::makeForm(std::string name, std::string target) {
    const int numForms = 3;
    std::string formNames[numForms] = {
        "robotomy",
        "presidential",
        "shrubbery"
    };
    AForm* forms[numForms] = {
        new RobotomyRequestForm(target),
        new PresidentialPardonForm(target),
        new ShrubberyCreationForm(target)
    };
    
    AForm* resultForm = NULL;
    
    for (int i = 0; i < numForms; i++) {
        if (name == formNames[i]) {
            std::cout << "Intern creates " << name << std::endl;
            resultForm = forms[i];
        } else {
            delete forms[i];
        }
    }
    
    if (resultForm == NULL) {
        std::cerr << "Error: Invalid form name - " << name << std::endl;
    }
    
    return resultForm;
}