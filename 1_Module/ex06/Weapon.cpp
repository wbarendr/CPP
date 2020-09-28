/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 11:34:04 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/09/25 14:19:23 by wester        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string kind)
{
   this->type = kind; 
}

Weapon::Weapon(const Weapon& other){
    *this = other;
}

Weapon&     Weapon::operator=(const Weapon& other){
    type = other.type;
    return *this;
}

Weapon::~Weapon(){
}

void    Weapon::setType(std::string kind)
{
    this->type = kind;
}

const std::string& Weapon::getType()
{
    return this->type;
}
