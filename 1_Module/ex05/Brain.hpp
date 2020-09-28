/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: Wester <Wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 21:43:56 by Wester        #+#    #+#                 */
/*   Updated: 2020/09/25 14:06:02 by wester        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BRAIN_HPP
# define _BRAIN_HPP

# include <iostream>
# include <string>
# include <sstream>

class Brain {
    int             neurons;
    int             pathways;
    std::string     address;
    
  public:
    Brain();
    ~Brain();
    std::string     identify();
};

#endif
