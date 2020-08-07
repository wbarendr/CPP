/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 12:46:46 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/08/07 13:52:22 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CHARACTER_HPP_
# define _CHARACTER_HPP_

# include <iostream>
# include <string>
# include "AWeapon.hpp"
# include "Enemy.hpp"
# include "PowerFist.hpp"
# include "PlasmaRifle.hpp"

class Character
{
  private:
    std::string _name;
    int         _apMax;
    int         _AP;
    AWeapon*    _gun;
    
public:
    Character(std::string const& name);
    ~Character();
    void recoverAP();
    void equip(AWeapon*);
    bool ifWeapon() const;
    void attack(Enemy*);
    std::string getName() const;
    int getAP() const;
    AWeapon&    getWeapon() const;
};

#endif