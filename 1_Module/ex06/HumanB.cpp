/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 12:29:35 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/07/29 12:41:45 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string s): name(s){};

HumanB::~HumanB(){};

void HumanB::attack()
{
    std::cout << this->name << " attacks with his " << this->gun->getType() << std::endl;
}

void        HumanB::setWeapon(Weapon &gun)
{
    this->gun = &gun;
}