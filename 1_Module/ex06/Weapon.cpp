/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 11:34:04 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/08/03 12:14:21 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string kind)
{
   this->type = kind; 
};

Weapon::~Weapon(){
};

void    Weapon::setType(std::string kind)
{
    this->type = kind;
}

const std::string& Weapon::getType()
{
    return this->type;
}