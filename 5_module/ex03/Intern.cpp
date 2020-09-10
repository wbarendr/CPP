/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: Wester <Wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/10 16:10:56 by Wester        #+#    #+#                 */
/*   Updated: 2020/09/10 17:15:19 by Wester        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){
	for (int i = 0; i < 3; ++i)
		_forms[i] = NULL;
}

Intern::Intern(const Intern& other){
	*this = other;
}

Intern&		Intern::operator=(const Intern& other){
	(void)other;
	return *this;
}

Intern::~Intern(){
}

Form*		Intern::makeForm(std::string form_name, std::string target){
	Form* ret = NULL;
	
	_forms[0] = new PresidentialPardonForm(target);
	_forms[1] = new ShrubberyCreationForm(target);
	_forms[2] = new RobotomyRequestForm(target);
	for (int i = 0; i < 3; ++i)
		if (form_name == _forms[i]->getName())
			ret = _forms[i];
	if (ret == NULL)		
		std::cout << "don't got ya form mate" << std::endl;
	else
		std::cout << "Intern creates " << ret->getName() << std::endl;
	for (int i = 0; i < 3; ++i)
		delete _forms[i];
	return ret;
}
