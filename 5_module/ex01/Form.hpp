/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Wester <Wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/09 14:15:35 by Wester        #+#    #+#                 */
/*   Updated: 2020/09/09 15:16:27 by Wester        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FORM_HPP_
# define _FORM_HPP_

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	std::string			_name;
	bool				_signed;
	int					_grade_sign;
	int					_grade_execute;

  public:
	Form();
	Form(std::string name, int sign, int execute);
	Form(const Form& other);
	Form&	operator=(const Form& other);
	~Form();

	std::string			getName() const;
	bool				getSigned() const;
	int					getGradeSign() const;
	int					getGradeExecute() const;

	void				beSigned(const Bureaucrat& crat);

	class GradeTooLowException : public std::runtime_error {
	  public:
	  	GradeTooLowException();
	  	virtual ~GradeTooLowException() throw();
	};
};

std::ostream&			operator<<(std::ostream& output, const Form& form);


#endif
