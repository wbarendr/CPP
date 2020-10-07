/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.hpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: Wester <Wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/09 18:15:20 by Wester        #+#    #+#                 */
/*   Updated: 2020/10/07 13:41:02 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SHRUBBERYCREATIONFORM_HPP_
# define _SHRUBBERYCREATIONFORM_HPP_

# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form
{
    std::string                 _target;
    
  public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm& other);
    ShrubberyCreationForm&      operator=(const ShrubberyCreationForm& other);
    virtual ~ShrubberyCreationForm();
    virtual void                execute(Bureaucrat const & executor) const;
};

#endif
