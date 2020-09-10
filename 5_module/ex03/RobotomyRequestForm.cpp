/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: Wester <Wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/09 19:57:05 by Wester        #+#    #+#                 */
/*   Updated: 2020/09/10 17:20:33 by Wester        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm():
	Form("robotomy request", 72, 45)
{}

RobotomyRequestForm::RobotomyRequestForm(std::string target):
	Form("robotomy request", 72, 45),
	_target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other):
	Form("robotomy request", 72, 45, other.getSigned()),
	_target(other._target)
{}

RobotomyRequestForm&      RobotomyRequestForm::operator=(const RobotomyRequestForm& other){
	Form::operator=(other);
	_target = other._target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(){}

void						RobotomyRequestForm::execute(Bureaucrat const & executor) const{
    std::cout << "drill drill drillllllll" << std::endl;
    static bool first = false;
    if (!first)
    {
        std::srand(static_cast<unsigned int>(std::time(0)));
        first = true;
    }
    int num = std::rand();
    if (num % 2 != 0)
        std::cout << this->_target << " has been robotomized successfully." << std::endl;
    else
        std::cout << "unfortunately is was a failure..." << std::endl;
    (void)executor;    
}
