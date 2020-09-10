/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: Wester <Wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/09 19:54:03 by Wester        #+#    #+#                 */
/*   Updated: 2020/09/10 17:20:50 by Wester        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():
	Form("presidential pardon", 145, 137)
{}

PresidentialPardonForm::PresidentialPardonForm(std::string target):
	Form("presidential pardon", 145, 137),
	_target(target)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other):
	Form("presidential pardon", 145, 137, other.getSigned()),
	_target(other._target)
{}

PresidentialPardonForm&      	PresidentialPardonForm::operator=(const PresidentialPardonForm& other){
	Form::operator=(other);
	_target = other._target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(){}

void							PresidentialPardonForm::execute(Bureaucrat const & executor) const{
	std::cout << this->_target << " has been pardoned by Zafod BeebleBrox." << std::endl;
	(void)executor;
}
