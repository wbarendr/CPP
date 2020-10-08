/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 12:46:46 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/10/08 15:28:58 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CHARACTER_HPP_
# define _CHARACTER_HPP_

# include <iostream>
# include <string>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
  private:
    std::string _name;
    int         _apMax;
    int         _AP;
    AWeapon*    _gun;
    
    Character();
  public:
    Character(std::string const& name);
    Character(const Character& other);
    Character&  operator=(const Character& other);
    ~Character();
    
    void        recoverAP();
    void        equip(AWeapon*);
    void        attack(Enemy*);
    std::string getName() const;
    int getAP() const;
    AWeapon*    getWeapon() const;
};

std::ostream&   operator<<(std::ostream& stream, const Character& other);

#endif
