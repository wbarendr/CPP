/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.class.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 17:23:45 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/07/27 20:16:39 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CONTACT_CLASS_HPP_
# define _CONTACT_CLASS_HPP_

# include <iostream>
# include <string.h>

class Contact {
  public: 
    std::string data[11];
    std::string array[11];
    void  add_data(void);
    void  table(void);
    void  print_this();
};

#endif