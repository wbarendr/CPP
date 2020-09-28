/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/02 14:50:22 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/09/28 12:35:24 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){
    // AMateria("ice");
}

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

void				Ice::use(ICharacter& target){
	_xp += 10;
    (void)target;
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
