/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: Wester <Wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/09 18:09:11 by Wester        #+#    #+#                 */
/*   Updated: 2020/10/02 15:22:36 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():
	Form("Shrubbery Creation Form", 145, 137)
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
	Form("ShrubberyCreationForm", 145, 137),
	_target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other):
	Form("Shrubbery Creation Form", 145, 137, other.getSigned()),
	_target(other._target)
{}

ShrubberyCreationForm&      ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other){
	Form::operator=(other);
	_target = other._target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

void						ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
	std::ofstream	output;
	std::string link1 = this->_target + "_shrubbery";
	const char* link2 = link1.c_str();
	output.open(link2, std::ofstream::out | std::ofstream::trunc);
	if (output.fail())
		std::cerr << "there was a error makiing the output - file" << std::endl;
		
	output << "         ^                 	" << std::endl;
	output << "        /|\\                 " << std::endl;
	output << "       /*|O\\				" << std::endl;
	output << "      /*/|\\*\\				" << std::endl;
	output << "     /X/O|*\\X\\				" << std::endl;
	output << "    /*/X/|\\X\\*\\			" << std::endl;
	output << "   /O/*/X|*\\O\\X\\          " << std::endl;
	output << "  /*/O/X/|\\X\\O\\X\\		" << std::endl;
	output << " /X/O/*/X|O\\X\\*\\O\\		" << std::endl;
	output << "/O/X/*/O/|\\X\\*\\O\\X\\		" << std::endl;
	output << "        |X|					" << std::endl;
	output << "        |X| 					" << std::endl;
	output.close();
	

	// std::string str = "tree > " + this->_target + "_shrubbery";
	// const char *command = str.c_str();
	// system(command);
	(void)executor;
}
