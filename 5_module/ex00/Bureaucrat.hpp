/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: Wester <Wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/04 15:41:34 by Wester        #+#    #+#                 */
/*   Updated: 2020/10/02 13:45:14 by wbarendr      ########   odam.nl         */
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

	class GradeTooHighException : public std::exception {
	  public:
		GradeTooHighException();
		GradeTooHighException(const GradeTooHighException& other);
		GradeTooHighException& 		operator=(const GradeTooHighException& other);
		virtual ~GradeTooHighException() throw();
		virtual const char   	 	*what() const throw();
	};

	class GradeTooLowException : public std::exception {
	  public:
		GradeTooLowException();
		GradeTooLowException(const GradeTooLowException& other);
		GradeTooLowException& 		operator=(const GradeTooLowException& other);
		virtual ~GradeTooLowException() throw();
		virtual const char    		*what() const throw();
	};
};

std::ostream&				operator<<(std::ostream& output, const Bureaucrat& crat);

#endif
