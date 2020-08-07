/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 12:46:47 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/08/07 17:58:29 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const& name){
    // gun->setAP(40);
    _name = name;
    _apMax = 40;
    _AP = _apMax;
    _gun = NULL;
};

Character::~Character(){
    // std::cout << "* SPROTCH *" << std::endl;
};

Character::Character(const Character& other){
	*this = other;
};

Character&    Character::operator=(const Character& other){
	_name = other._name;
	_apMax = other._apMax;
    return *this;
}

void    Character::equip(AWeapon* gun){
    _gun = gun;
}

void    Character::recoverAP(){
    if (_AP + 10 > _apMax){
        _AP = _apMax;
    }
    else 
        _AP += 10;
}

void    Character::attack(Enemy* bad){
    if (!_gun || _AP < _gun->getAPCost() || !bad)
        return ;
    std::cout << _name << " attacks " << bad->getType() << " with a " << _gun->getName() << std::endl;
    _AP -= _gun->getAPCost();
    bad->takeDamage(_gun->getDamage());
    if (bad->getHP() <= 0)
        delete bad;
}

std::string     Character::getName() const{
    return _name;
}

int              Character::getAP() const{
    return _AP;
}

AWeapon*         Character::getWeapon() const{
    return _gun;
}
