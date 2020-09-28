/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 11:27:33 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/09/25 14:19:43 by wester        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string s, Weapon& w): name(s), gun(w)
{}

HumanA::~HumanA(){}

void HumanA::attack()
{
    std::cout << this->name << " attacks with his " << this->gun.getType() << std::endl;
}
