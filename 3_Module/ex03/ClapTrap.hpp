/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 15:29:48 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/10/02 11:56:22 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CLAPTRAP_HPP_
# define _CLAPTRAP_HPP_

# include <iostream>
# include <string>

class ClapTrap
{
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
		ClapTrap();
		ClapTrap(std::string name);
		virtual ~ClapTrap();
		ClapTrap(const ClapTrap& other);
		ClapTrap&		operator=(const ClapTrap &overload);
		std::string   	takeName();
		void          	giveName(std::string name);
		void          	takeDamage(unsigned int amount);
		void          	beRepaired(unsigned int amount);
		void          	changeEnergy(unsigned int num);
		int           	energyPoints();
		void	        changeHit(unsigned int num);
		int           	hitPoints();
		void          	changeArmorReduction(int num);
		int           	Max_Energy();
		void			changeMax(unsigned int num);
		int           	Max_Hit();
		void			changeMaxHit(unsigned int num);
};

#endif
