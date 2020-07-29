/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: Wester <Wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 21:43:56 by Wester        #+#    #+#                 */
/*   Updated: 2020/07/28 21:43:57 by Wester        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BRAIN_HPP
# define _BRAIN_HPP

# include <iostream>
# include <string>
# include <sstream>

class Brain {
  public:
    int neurons;
    int pathways;
    std::string address;
    std::string     identify(void);
    Brain();
    ~Brain();
};

#endif