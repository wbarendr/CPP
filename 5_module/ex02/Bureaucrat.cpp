/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: Wester <Wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/04 15:48:23 by Wester        #+#    #+#                 */
/*   Updated: 2020/10/08 11:56:11 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::GradeTooHighException::GradeTooHighException(void)
{}

Bureaucrat::GradeTooHighException::GradeTooHighException(const GradeTooHighException& other){
	*this = other; 
}

Bureaucrat::GradeTooHighException& Bureaucrat::GradeTooHighException::operator=(const GradeTooHighException& other){
	static_cast <void> (other);
	return *this;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw() {}

const char*			Bureaucrat::GradeTooHighException::what(void) const throw(){
	return "Throwing the exception because the grade is to high^^^";
}

Bureaucrat::GradeTooLowException::GradeTooLowException(void)
{}

Bureaucrat::GradeTooLowException::GradeTooLowException(const GradeTooLowException& other){
	*this = other; 
}

Bureaucrat::GradeTooLowException& Bureaucrat::GradeTooLowException::operator=(const GradeTooLowException& other){
	static_cast <void> (other);
	return *this;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw() {}

const char*			Bureaucrat::GradeTooLowException::what(void) const throw(){
	return "Throwing the exception because the grade is to Low-low-loooo^^^";
}

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(const std::string name, int grade):_name(name) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade = grade;
}
 
Bureaucrat::Bureaucrat(const Bureaucrat& other){
	*this = other;
}
Bureaucrat&                 Bureaucrat::operator=(const Bureaucrat& other){
	const_cast<std::string&>(_name) = other._name;
	_grade = other._grade;
	return *this;
}

Bureaucrat::~Bureaucrat() {}

const std::string			Bureaucrat::getName(void) const{
	return _name;
}

int							Bureaucrat::getGrade(void) const{
	return _grade;
}

void						Bureaucrat::increment(void){
	if (_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade--;
}

void						Bureaucrat::decrement(void){
	if (_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade++;
}

std::ostream&				operator<<(std::ostream& output, const Bureaucrat& crat){
	output << crat.getName() << ", bureaucrat grade " << crat.getGrade() << ".";
	return output;
}

void						Bureaucrat::signForm(const Form& form) const
{
	if (getGrade() <= form.getGradeSign())
		std::cout << getName() << " signs " << form.getName() << std::endl;
	else 
		std::cout << getName() << " cannot sign " << form.getName() << " because grade is to low" << std::endl;
}

void						Bureaucrat::executeForm(Form const & form)
{
	try {
		form.execute(*this);
		std::cout << _name << " executes " <<  form.getName() << std::endl;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
}
