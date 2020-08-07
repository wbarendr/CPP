/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 12:05:18 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/08/07 18:04:41 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(): 
    AWeapon("Power Fist", 8, 50){};

PowerFist::PowerFist(const PowerFist& other){
	*this = other;
};

PowerFist&    PowerFist::operator=(const PowerFist& other){
	setName(other.getName());
	setDamage(other.getDamage());
	setAP(other.getAPCost());
    return *this;
}

void 		PowerFist::attack() const{
    std::cout << "* pschhh... SBAM! *" << std::endl;
}
