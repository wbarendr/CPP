/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Flamethrower.cpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/08 15:43:50 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/10/08 16:01:23 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Flamethrower.hpp"

Flamethrower::Flamethrower(): 
    AWeapon("Flame thrower", 4, 1008){}

Flamethrower::Flamethrower(const Flamethrower& other){
	*this = other;
}

Flamethrower&    Flamethrower::operator=(const Flamethrower& other){
	setName(other.getName());
	setDamage(other.getDamage());
	setAP(other.getAPCost());
    return *this;
}

void 		Flamethrower::attack() const{
    std::cout << "* BOOSH! *" << std::endl;
}
