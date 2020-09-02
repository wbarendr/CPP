/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/02 14:50:22 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/09/02 14:51:04 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(){}

Ice::Ice(const Ice& other){
	*this = other;
}

Ice&               Ice::operator=(const Ice& other){
	_xp = other._xp;
    _type = other._type;
    return *this;
}

Ice::~Ice(){}

AMateria*           Ice::clone() const{
    AMateria* clone = new Ice();
    // clone = this;
    return clone;
}

void				Ice::use( ICharacter& target){
	_xp += 10;
	std::cout << "*shoots an ice bolt at " << "NAME" << std::endl;
}