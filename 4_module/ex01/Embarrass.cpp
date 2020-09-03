/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Embarrass.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 16:39:11 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/09/03 16:52:11 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Embarrass.hpp"

Embarrass::Embarrass(): 
    AWeapon("genant", 10, 20){};

Embarrass::Embarrass(const Embarrass& other){
	*this = other;
};

Embarrass&    Embarrass::operator=(const Embarrass& other){
	setName(other.getName());
	setDamage(other.getDamage());
	setAP(other.getAPCost());
    return *this;
}

void 		Embarrass::attack() const{
    std::cout << "new shirt eh?.." << std::endl;
}
