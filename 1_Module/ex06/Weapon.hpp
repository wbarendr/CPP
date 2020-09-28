/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 11:18:38 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/09/25 14:19:06 by wester        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WEAPON_HPP_
# define _WEAPON_HPP_

# include <iostream>

class Weapon {
    std::string type;
  public:  
    
    Weapon();
    Weapon(const Weapon &other);
    Weapon&               operator=(const Weapon& other);
    Weapon(std::string kind);
    ~Weapon();
    
    const std::string&    getType();
    void                  setType(std::string kind);
};

#endif
