/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 12:54:48 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/08/03 16:35:53 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SCAVTRAP_HPP_
# define _SCAVTRAP_HPP_

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap : public ClapTrap{
  private:
    const static int Melee_attack_damage = 20;
    const static int Ranged_attack_damage = 15;

  public:
    ScavTrap();
    ScavTrap(std::string name);
    ~ScavTrap();
    void rangedAttack(std::string const& target);
    void meleeAttack(std::string const& target);
    void challengeNewcomer(std::string const& target);
};

#endif