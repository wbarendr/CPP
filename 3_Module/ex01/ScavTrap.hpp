/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 12:54:48 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/08/03 13:09:05 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SCAVTRAP_HPP_
# define _SCAVTRAP_HPP_

#include <iostream>
#include <string>

class ScavTrap {
  private:
    int Hit_Points;
    const static int Max_Hit_Points = 100;
    int Energy_Points;
    const static int Max_Energy_points = 50;
    const static int Level = 1;
    std::string Name;
    const static int Melee_attack_damage = 20;
    const static int Ranged_attack_damage = 15;
    const static int Armor_damage_reduction = 3;

  public:
    ScavTrap();
    ScavTrap(std::string name);
    ~ScavTrap();
    void rangedAttack(std::string const& target);
    void meleeAttack(std::string const& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void challengeNewcomer(std::string const& target);
  
};

#endif