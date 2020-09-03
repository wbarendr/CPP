/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peasant.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 16:14:14 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/09/03 16:23:10 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Peasant.hpp"

Peasant::~Peasant(){
    std::cout << "dig me a hole..." << std::endl;
};

Peasant::Peasant(std::string _name): Victim(_name){
    std::cout << "whistling...zzz" << std::endl;
}

Peasant::Peasant(const Peasant& other){
    *this = other;
}

Peasant& Peasant::operator=(const Peasant& other)
{
    name = other.name;
	return *this;
};

void    Peasant::getPolymorphed() const{
    std::cout << name << " has been turned a shovel" << std::endl;
}