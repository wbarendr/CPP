/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/06 14:18:48 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/08/06 14:51:03 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::~Peon(){
    std::cout << "Blueark..." << std::endl;
};

Peon::Peon(std::string _name): Victim(_name){
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon& other){
    *this = other;
}

Peon& Peon::operator=(const Peon& other)
{
    name = other.name;
	return *this;
};

void    Peon::getPolymorphed() const{
    std::cout << name << " has been turned into a pink pony!" << std::endl;
}