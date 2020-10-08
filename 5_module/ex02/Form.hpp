/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Wester <Wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/09 14:15:35 by Wester        #+#    #+#                 */
/*   Updated: 2020/10/08 11:53:21 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FORM_HPP_
# define _FORM_HPP_

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	const std::string	_name;
	bool				_signed;
	const int			_grade_sign;
	const int			_grade_execute;

  public:
	Form();
	Form(std::string name, int sign, int execute);
	Form(std::string name, int sign, int execute, bool lsigned);
	Form(const Form& other);
	Form&	operator=(const Form& other);
	virtual ~Form();

	std::string			getName() const;
	bool				getSigned() const;
	int					getGradeSign() const;
	int					getGradeExecute() const;

	void				beSigned(const Bureaucrat& crat);

	virtual void		execute(Bureaucrat const & executor) const;
	
	class GradeTooLowException : public std::exception {
	  public:
		GradeTooLowException();
		GradeTooLowException(const GradeTooLowException& other);
		GradeTooLowException& 		operator=(const GradeTooLowException& other);
		virtual ~GradeTooLowException() throw();
		virtual const char    		*what() const throw();
	};
	
	class NotSignedException : public std::exception {
	  public:
		NotSignedException();
		NotSignedException(const NotSignedException& other);
		NotSignedException& 		operator=(const NotSignedException& other);
		virtual ~NotSignedException() throw();
		virtual const char    		*what() const throw();
	};
};

std::ostream&			operator<<(std::ostream& output, const Form& form);


#endif
