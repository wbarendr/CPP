/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: Wester <Wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/09 18:09:11 by Wester        #+#    #+#                 */
/*   Updated: 2020/09/10 17:21:30 by Wester        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():
	Form("shrubbery creation", 145, 137)
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
	Form("shrubbery creation", 145, 137),
	_target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other):
	Form("shrubbery creation", 145, 137, other.getSigned()),
	_target(other._target)
{}

ShrubberyCreationForm&      ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other){
	Form::operator=(other);
	_target = other._target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

void						ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
	std::string str = "tree > " + this->_target + "_shrubbery";
	const char *command = str.c_str();
	system(command);
	(void)executor;
}
