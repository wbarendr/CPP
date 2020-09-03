/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/02 14:25:50 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/09/03 14:26:59 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure"){
    // AMateria("ice");
};

Cure::Cure(const Cure& other){
	*this = other;
}

Cure&               Cure::operator=(const Cure& other){
	_xp = other._xp;
    _type = other._type;
    return *this;
}

Cure::~Cure(){}

AMateria*           Cure::clone() const{
    AMateria* clone = new Cure();
    // clone = this;
    return clone;
}

void				Cure::use(ICharacter& target){
	_xp += 10;
    (void)target;
	std::cout << "* heals " << target.getName() << "\'s wounds *" << std::endl;
}