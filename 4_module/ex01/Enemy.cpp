/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 12:12:40 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/09/03 17:00:36 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(){};

Enemy::Enemy(int hp, std::string const& type){
	_hp = hp;
	_type = type;
};

Enemy::~Enemy(){};

Enemy::Enemy(const Enemy& other){
	*this = other;
};

Enemy&    Enemy::operator=(const Enemy& other){
	_hp = other._hp;
	_type = other._type;
	return *this;
}

void    Enemy::takeDamage(int damage){
	if (damage <= 0)
        return ;
	if (_hp - damage <= 0){
		_hp = 0;
	}
	else {
		_hp -= damage;
	}
}

std::string     Enemy::getType() const{
	return _type;
}

int 	    	Enemy::getHP() const{
	return _hp;
}

void			Enemy::setHP(int hp){
	_hp = hp;
}

void			Enemy::setType(std::string type){
	_type = type;
}
