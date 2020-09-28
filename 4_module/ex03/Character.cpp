/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/02 15:16:37 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/09/28 12:33:01 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(){
	num = 0;
}

Character::Character(std::string const& name){
	_name = name;
	num = 0;
	for (int i = 0; i <= 4; ++i){
		_materia[i] = NULL;
	}
}

Character::Character(const Character& other){
	*this = other;
}

Character&               	Character::operator=(const Character& other){
	delete_mat();
	_name = other._name;
	num = other.num;
	for (int i = 0; i < num; ++i){
		_materia[i] = other._materia[i];
	}
	return *this;
}

Character::~Character(){
	delete_mat();
}

void						Character::delete_mat(void){
	for (int i = 0; i < num; ++i){
		delete _materia[i];
	}
}

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

void 						Character::use(int idx, ICharacter& target){
	if (idx < 0 || idx >= num || _materia[idx] == NULL)
		return ;
	_materia[idx]->use(target);
}
