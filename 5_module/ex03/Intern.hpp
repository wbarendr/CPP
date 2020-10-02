/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: Wester <Wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/10 16:33:50 by Wester        #+#    #+#                 */
/*   Updated: 2020/10/02 11:51:19 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _INTERN_HPP_
# define _INTERN_HPP_

# include "Bureaucrat.hpp"
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
    Form *_forms[3];
    
  public:
	Intern();
	Intern(const Intern& other);
	Intern&		operator=(const Intern& other);
	~Intern();
	
	Form*           makeForm(std::string form, std::string target);
};


#endif
