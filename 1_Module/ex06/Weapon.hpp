/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 11:18:38 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/08/03 11:32:26 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WEAPON_HPP_
# define _WEAPON_HPP_

# include <iostream>

class Weapon {
    std::string type;
  public:  
    const std::string& getType();
    void setType(std::string kind);
    
    Weapon();
    Weapon(const Weapon &other);
    Weapon(std::string kind);
    ~Weapon();
};


#endif