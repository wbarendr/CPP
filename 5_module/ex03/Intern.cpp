/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: Wester <Wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/10 16:10:56 by Wester        #+#    #+#                 */
/*   Updated: 2020/10/08 13:43:56 by wbarendr      ########   odam.nl         */
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
	int i = 0;
	for (; i < 3; ++i)
		if (form_name == _forms[i]->getName()){
			ret = _forms[i];
			break ;
		}
	if (ret == NULL)		
		std::cout << "don't got ya form mate" << std::endl;
	else
		std::cout << "Intern creates " << ret->getName() << std::endl;
	for (int j = 0; j < 3; ++j){
		if (j != i)
			delete _forms[j];
	}
	std::cout << "i: " << i << std::endl; 
	return ret;
}
