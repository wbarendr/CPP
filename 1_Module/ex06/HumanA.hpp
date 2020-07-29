/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 11:28:13 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/07/29 12:25:53 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANA_HPP
# define _HUMANA_HPP

# include "Weapon.hpp"

class HumanA {
    std::string name;
    Weapon&     gun;
  public:
    void        attack();
    HumanA(std::string new_name , Weapon &new_gun);
    ~HumanA();
};

#endif