/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/02 13:53:52 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/09/28 12:37:04 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(){
	std::cout << "coukd yyou pleas give me a name" << std::endl;
	_xp = 0;
}

AMateria::AMateria(std::string const& type){
	_type = type;
	_xp = 0;
}

AMateria::AMateria(const AMateria& other){
	*this = other;
}

AMateria&               AMateria::operator=(const AMateria& other){
	_type = other._type;
	_xp = other._xp;
	return *this;
}

AMateria::~AMateria(){}

std::string const&      AMateria::getType(void) const {
	return _type;
}

unsigned int      		AMateria::getXP(void) const {
	return _xp;
}

void					AMateria::use(ICharacter& target){
	_xp += 10;
	(void)target;
}
