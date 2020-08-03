/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 11:26:52 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/08/03 11:38:59 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANB_HPP
# define _HUMANB_HPP

# include "Weapon.hpp"

class HumanB {
    std::string name;
    Weapon     *gun;
  public:
    void        attack();
    void        setWeapon(Weapon &gun);
    HumanB(std::string new_name);
    ~HumanB();
};

#endif