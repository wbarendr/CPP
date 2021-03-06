/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.hpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: Wester <Wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/09 19:54:16 by Wester        #+#    #+#                 */
/*   Updated: 2020/10/08 11:55:08 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PRESIDENTIALPARDONFORM_HPP_
# define _PRESIDENTIALPARDONFORM_HPP_

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
    std::string                 _target;
    
  public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(const PresidentialPardonForm& other);
    PresidentialPardonForm&      operator=(const PresidentialPardonForm& other);
    virtual ~PresidentialPardonForm();
    virtual void                 execute(Bureaucrat const & executor) const;
};

#endif
