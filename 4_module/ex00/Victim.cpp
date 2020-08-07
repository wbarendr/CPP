/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/06 13:44:00 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/08/06 14:50:43 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(){
    // std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
};

Victim::Victim(std::string _name){
    name = _name;
    std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
};

Victim::~Victim(){
    std::cout << "Victim " << name << " just dies for no apparent reason!" << std::endl; 
};

Victim::Victim(const Victim& other){
    *this = other;
}

Victim& Victim::operator=(const Victim& other)
{
    name = other.name;
	return *this;
};

std::string  Victim::getName()const {
    return name;
}

void    Victim::getPolymorphed() const{
    std::cout << name << " has been turned into a cute little sheep!" << std::endl;
}