/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 12:26:27 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/09/28 12:26:55 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant():
   Enemy(170, "Super Mutant"){
       std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant(){
    std::cout << "Aaargh..." << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant& other){
	*this = other;
}

SuperMutant&    SuperMutant::operator=(const SuperMutant& other){
	setHP(other.getHP());
	setType(other.getType());
    return *this;
}


void        SuperMutant::takeDamage(int damage){
    damage -= 3;
    if (damage <= 0)
        return ;
    if (getHP() - damage <= 0){
        setHP(0);
    }
    else
        setHP(getHP() - damage);
}
