/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 18:15:20 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/08/05 13:32:40 by Wester        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SUPERTRAP_HPP_
# define _SUPERTRAP_HPP_

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include <iostream>
#include <string>

class SuperTrap : public NinjaTrap, public FragTrap{
  protected:
		int Hit_Points;
		int Max_Hit_Points;
		int Energy_Points;
		int Max_Energy_points;
		int Level;
		std::string Name;
		int Melee_attack_damage;
		int Ranged_attack_damage;
		int Armor_damage_reduction;
    
  public:
    SuperTrap();
    SuperTrap(std::string name);
    SuperTrap(const SuperTrap& other);
		SuperTrap&		operator=(const SuperTrap &overload);
    virtual ~SuperTrap();
    void print_vars();
    void rangedAttack(std::string const& target);
    void meleeAttack(std::string const& target);
    void takeDamage(unsigned int num);
    void beRepaired(int num); 
};

#endif