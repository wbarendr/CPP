/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 11:08:14 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/08/07 13:06:27 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(){};

PlasmaRifle::PlasmaRifle(std::string const& name, int apcost, int damage): 
    AWeapon("Plasma Rifle", 5, 21){};

PlasmaRifle::~PlasmaRifle(){};

PlasmaRifle::PlasmaRifle(const PlasmaRifle& other){
	*this = other;
};

PlasmaRifle&    PlasmaRifle::operator=(const PlasmaRifle& other){
	setName(other.getName);
	setDamage(other.getDamage);
	setAP(other.getAPCost);
    return *this;
}

void 		PlasmaRifle::attack() const{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
