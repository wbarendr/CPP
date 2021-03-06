/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 11:43:56 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/10/04 14:55:05 by wester        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FRAGTRAP_HPP_
# define _FRAGTRAP_HPP_

# include <iostream>
# include <string>
# include <cstdlib>

class FragTrap {
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
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap& other);
		FragTrap&		operator=(const FragTrap &overload);
		~FragTrap();
		
		void rangedAttack(std::string const& target);
		void meleeAttack(std::string const& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void vaulthunter_dot_exe(std::string const& target);
	
};

#endif
