/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fire.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Wester <Wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/04 14:19:20 by Wester        #+#    #+#                 */
/*   Updated: 2020/09/04 14:42:56 by Wester        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fire.hpp"

Fire::Fire() : AMateria("Fire"){
    // AMateria("fire!!");
};

Fire::Fire(const Fire& other){
	*this = other;
}

Fire&               Fire::operator=(const Fire& other){
	_xp = other._xp;
    _type = other._type;
    return *this;
}

Fire::~Fire(){}

AMateria*           Fire::clone() const{
    AMateria* clone = new Fire();
    return clone;
}

void				Fire::use(ICharacter& target){
	_xp += 10;
	std::cout << "Throws fireball at " << target.getName() << " !-!" << std::endl;
}