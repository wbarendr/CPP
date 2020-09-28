/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: Wester <Wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/04 15:41:34 by Wester        #+#    #+#                 */
/*   Updated: 2020/09/28 16:51:20 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BUREAUCRAT_HPP_
# define _BUREAUCRAT_HPP_

# include <iostream>
# include <string>
# include <stdexcept>

class Bureaucrat
{
	const std::string			_name;
	int							_grade;
	
	Bureaucrat();
  public:
	Bureaucrat(const std::string name, int grade);
	Bureaucrat(const Bureaucrat& other);
	Bureaucrat&					operator=(const Bureaucrat& other);
	~Bureaucrat();
	
	const std::string			getName() const;
	int							getGrade() const;
	void						increment();
	void						decrement();

	class GradeTooHighException : public std::runtime_error {
	  public:
		GradeTooHighException();
		virtual ~GradeTooHighException() throw();
	};

	class GradeTooLowException : public std::runtime_error {
	  public:
		GradeTooLowException();
		virtual ~GradeTooLowException() throw();
	};
};

std::ostream&				operator<<(std::ostream& output, const Bureaucrat& crat);

#endif
