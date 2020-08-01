/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 11:43:56 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/08/01 14:27:08 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FRAGTRAP_HPP_
# define _FRAGTRAP_HPP_

#include <iostream>
#include <string>

class FragTrap {
  private:
    int Hit_Points;
    const static int Max_Hit_Points = 100;
    int Energy_Points;
    const static int Max_Energy_points = 100;
    const static int Level = 1;
    std::string Name;
    const static int Melee_attack_damage = 30;
    const static int Ranged_attack_damage = 20;
    const static int Armor_damage_reduction = 5;

  public:
    FragTrap();
    FragTrap(std::string name);
    ~FragTrap();
    void rangedAttack(std::string const& target);
    void meleeAttack(std::string const& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void vaulthunter_dot_exe(std::string const& target);
  
};

#endif