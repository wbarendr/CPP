/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 11:08:14 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/09/28 12:26:06 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(): 
    AWeapon("Plasma Rifle", 5, 21){}

PlasmaRifle::~PlasmaRifle(){}

PlasmaRifle::PlasmaRifle(const PlasmaRifle& other){
	*this = other;
}

PlasmaRifle&    PlasmaRifle::operator=(const PlasmaRifle& other){
	setName(other.getName());
	setDamage(other.getDamage());
	setAP(other.getAPCost());
    return *this;
}

void 		PlasmaRifle::attack() const{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
