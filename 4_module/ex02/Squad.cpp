/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/01 13:09:35 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/09/28 12:29:51 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(){
	_count = 0;
	_soldiers = NULL;
}

Squad::Squad(const Squad& other){
	this->_count = other._count;
	this->deepCopy(other);
}

Squad& Squad::operator=(const Squad& other){
	(void)other;
	return *this;
}

Squad::~Squad(){
	destroyUnits();
}

void	Squad::deepCopy(const Squad& other)
{
	for (int i = 0; i < other.getCount(); ++i){
		push(other.getUnit(i));
	}
}

void	Squad::destroyUnits(void){
	t_container* tmp;

	if (_soldiers) {
		while (_soldiers->next)
		{
			tmp = _soldiers;
			delete _soldiers->unit;
			_soldiers = tmp->next;
			delete tmp;
		}
		delete _soldiers->unit;
		delete _soldiers;
	}
}

int                 Squad::getCount(void) const{
	return this->_count;
}

ISpaceMarine*       Squad::getUnit(int num) const{
	t_container *tmp;

	if (num >= 0 && num <= this->_count){
		tmp = this->_soldiers;
		while (num){
			num--;
			tmp = tmp->next;
		}
		return tmp->unit;
	}
	return NULL;	
}

int					Squad::push(ISpaceMarine* soldier){
	s_container *tmp = _soldiers;
	t_container *newSoldier = new s_container;
	
	if (soldier == NULL)
		return (this->_count);
	newSoldier->unit = soldier;
	newSoldier->next = NULL;
	if (this->_soldiers != NULL){
		while (tmp->next){
			tmp = tmp->next;
		}
		tmp->next = newSoldier;
	}
	else {
		_soldiers = newSoldier;
	}
	this->_count++;
	return this->_count;
}
