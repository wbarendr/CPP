/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: Wester <Wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 17:32:32 by Wester        #+#    #+#                 */
/*   Updated: 2020/08/05 18:27:01 by Wester        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SORCERER_HPP_
# define _SORCERER_HPP_

#include <iostream>
#include <string>

class Sorcerer {
  private:
    std::string name;
    std::string title;
    Sorcerer(void);
  public:
    ~Sorcerer();
    Sorcerer(std::string _name, std::string _title);
    
};

#endif