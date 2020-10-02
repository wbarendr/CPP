/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Wester <Wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/09 14:29:31 by Wester        #+#    #+#                 */
/*   Updated: 2020/10/02 14:22:13 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): 
	_grade_sign(150),
	_grade_execute(150)
{}

Form::Form(const std::string name, int sign, int execute): 
	_name(name), _grade_sign(sign), _grade_execute(execute){
	_signed = false;
}

Form::Form(const std::string name, int sign, int execute, bool lsigned): 
	_name(name), _signed(lsigned), _grade_sign(sign), _grade_execute(execute){
}

Form::Form(const Form& other):
	_name(other._name), 
	_signed(other._signed),
	_grade_sign(other._grade_sign),
	_grade_execute(other._grade_execute)
{
	*this = other;
}

Form&       Form::operator=(const Form& other){
	(void)other;
	return *this;
}

Form::~Form(){}

std::string Form::getName(void) const {
	return _name;
}

bool        Form::getSigned(void) const{
	return _signed;
}

int			Form::getGradeSign(void)const{
	return _grade_sign;
}

int			Form::getGradeExecute(void)const {
	return _grade_execute;
}

void        Form::beSigned(const Bureaucrat& crat){
	if (crat.getGrade() > this->getGradeSign()){
		crat.signForm(*this);
		throw Form::GradeTooLowException();
		return ; // not necessary because a throw doesn't return. 
	}
	else 
		_signed = true;
	crat.signForm(*this);
}

Form::GradeTooLowException::GradeTooLowException(void)
{}

Form::GradeTooLowException::GradeTooLowException(const GradeTooLowException& other){
	*this = other; 
}

Form::GradeTooLowException& Form::GradeTooLowException::operator=(const GradeTooLowException& other){
	static_cast <void> (other);
	return *this;
}

Form::GradeTooLowException::~GradeTooLowException(void) throw() {}

const char*			Form::GradeTooLowException::what(void) const throw(){
	return "gonna need a higher bureaucrat to sign or execute these papers mate..";
}

Form::NotSignedException::NotSignedException(void)
{}

Form::NotSignedException::NotSignedException(const NotSignedException& other){
	*this = other; 
}

Form::NotSignedException& Form::NotSignedException::operator=(const NotSignedException& other){
	static_cast <void> (other);
	return *this;
}

Form::NotSignedException::~NotSignedException(void) throw() {}

const char*			Form::NotSignedException::what(void) const throw(){
	return "these papers are not signed yet mate..";
}

std::ostream&			operator<<(std::ostream& output, const Form& form){
	output << form.getName() << " has " << form.getGradeSign() << " as grade to sign, and " << form.getGradeExecute() << " as grade to execute. ";
	if (form.getSigned())
		output << "Form is signed";
	else 
		output << "Form has not been signed";
	return output;
}

void                    Form::execute(Bureaucrat const & executor) const {
	if (!this->_signed)
		throw Form::NotSignedException();
	if (executor.getGrade() > this->_grade_execute)
		throw Form::GradeTooLowException();
}
