/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.hpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: Wester <Wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/09 19:57:39 by Wester        #+#    #+#                 */
/*   Updated: 2020/10/08 11:31:54 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ROBOTOMYREQUESTFORM_HPP_
# define _ROBOTOMYREQUESTFORM_HPP_

# include "Form.hpp"

class RobotomyRequestForm : public Form
{
    std::string                 _target;
    
  public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(const RobotomyRequestForm& other);
    RobotomyRequestForm&      operator=(const RobotomyRequestForm& other);
    virtual ~RobotomyRequestForm();
    virtual void              execute(Bureaucrat const & executor) const;
};

#endif
