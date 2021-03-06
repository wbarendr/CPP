/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: Wester <Wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/09 19:54:03 by Wester        #+#    #+#                 */
/*   Updated: 2020/10/08 13:27:08 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():
	Form("presidential pardon", 25,5)
{}

PresidentialPardonForm::PresidentialPardonForm(std::string target):
	Form("presidential pardon", 25,5),
	_target(target)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other):
	Form("presidential pardon", 25,5, other.getSigned()),
	_target(other._target)
{}

PresidentialPardonForm&      	PresidentialPardonForm::operator=(const PresidentialPardonForm& other){
	Form::operator=(other);
	_target = other._target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(){}

void							PresidentialPardonForm::execute(Bureaucrat const & executor) const{
	Form::execute(executor);	
	std::cout << this->_target << " has been pardoned by Zafod BeebleBrox." << std::endl;
}
