/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 10:42:55 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/08/07 13:18:18 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(){};

AWeapon::AWeapon(std::string const& name, int apcost, int damage){
	_name = name;
	_damage = damage;
	_ap = apcost;
};

AWeapon::~AWeapon(){};

AWeapon::AWeapon(const AWeapon& other){
	*this = other;
};

AWeapon&    AWeapon::operator=(const AWeapon& other){
	_name = other._name;
	_damage = other._damage;
	_ap = other._ap;
}

int 		AWeapon::getAPCost() const{
	return (_ap);
}

int 		AWeapon::getDamage() const{
	return (_damage);
}

void 		AWeapon::setAP(int apcost){
	_ap = apcost;
}

void 		AWeapon::getAP(){
	return _ap;
}

void 		AWeapon::setDamage(int damage){
	_damage = damage;
}

void 		AWeapon::setName(std::string name){
	_name = name;;
}
