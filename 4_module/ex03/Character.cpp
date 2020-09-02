/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/02 15:16:37 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/09/02 15:35:08 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(){
	_num = 0;
}

Character::Character(std::string const& name){
	_name = name;
	_num = 0;
	for (int i = 0; i <= 4; ++i){
		_materia[i] = NULL;
	}
}

Character::Character(const Character& other){
	*this = other;
}

Character&               	Character::operator=(const Character& other){
	_name = other._name;
	_num = other._num;
	while >>>>...
	// _type = other._type;
	return *this;
}

Character::~Character(){}

std::string const&			Character::getName(void) const{
	return _name;
}

void						Character::equip(AMateria* m){
	if (!m || num == 4)
		return ;
	_materia[num] = m;
	num++;
}

void						Character::unequip(int idx){
	if (idx < 0 || idx >= num)
		return ;
	while (idx < num)
	{
		_materia[idx] = _materia[idx + 1];
		idx++;	
	}
	num--;
}

void 						use(hier was ik gebleven::)// test graag het unequip algorithme :) 