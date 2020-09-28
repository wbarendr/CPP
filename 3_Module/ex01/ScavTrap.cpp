/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 12:55:59 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/09/28 11:42:04 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	Hit_Points = 100;
	Energy_Points = 50;
	Max_Hit_Points = 100;
	Max_Energy_points = 50;
	Level = 1;
	Melee_attack_damage = 20;
	Ranged_attack_damage = 15;
	Armor_damage_reduction = 3;
	std::cout << "Making a Scav" << std::endl;
}

ScavTrap::ScavTrap(std::string name){
	Hit_Points = 100;
	Energy_Points = 50;
	Max_Hit_Points = 100;
	Max_Energy_points = 50;
	Level = 1;
	Melee_attack_damage = 20;
	Ranged_attack_damage = 15;
	Armor_damage_reduction = 3;
	std::cout << "Constructing ScavTrap && naming it" << std::endl;
	Name = name;
}

ScavTrap::ScavTrap(const ScavTrap& other){
	*this = other;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& overload){
	Hit_Points = overload.Hit_Points;
	Max_Hit_Points = overload.Max_Hit_Points;
	Energy_Points = overload.Energy_Points;
	Max_Energy_points = overload.Max_Energy_points;
	Level = overload.Level;
	Name = overload.Name;
	Melee_attack_damage = overload.Melee_attack_damage;
	Ranged_attack_damage = overload.Ranged_attack_damage;
	Armor_damage_reduction = overload.Armor_damage_reduction;
	return *this;
}

ScavTrap::~ScavTrap(){
	std::cout << "Destroyer of scav" << std::endl;
};

void    ScavTrap::rangedAttack(std::string const& target){
	if (Energy_Points == 0){
		std::cout << Name << " has been long gone..." << std::endl;	
		return ;
	}
	std::cout << "The little scav named " << Name << " attacks " << target << " at range, causing " <<
	Ranged_attack_damage << " points of damage!" << std::endl; 
}

void	ScavTrap::meleeAttack(std::string const& target){
	if (Energy_Points == 0){
		std::cout << Name << " Scav has been long gone..." << std::endl;	
		return ;
	}
	std::cout << "The little scav named "  << Name << " attacks " << target << " melee, causing " <<
	Melee_attack_damage << " points of damage!" << std::endl;
}

void	ScavTrap::challengeNewcomer(std::string const& target){
	if (Energy_Points == 0){
		std::cout << Name << " Scav has been long gone..." << std::endl;	
		return ;
	}
	std::string attacks[] = {"change all of it's passwords", "put drink on computer table at codam", "kick robijn", "play PingPong", "stay home"} ;
	static int yes = 1;
	int num; 
		
	if (yes == 1){
        srand(time(NULL));
        yes = 0;
    }
    num = rand() % 5;
	if (Energy_Points <= 20){
		std::cout << Name << " is low on energy." << std::endl;	
		return ;
	}
	std::cout << Name << " challenges " << target << " to " << attacks[num] << std::endl;
	Energy_Points -= 20;
}

void	ScavTrap::beRepaired(unsigned int amount){
	if (Energy_Points == 0){
		std::cout << Name << " has been long gone..." << std::endl;	
		return ;
	}
	std::cout << "Healing by " << amount << " points :)" << std::endl;
	if (Energy_Points + (int)amount > Max_Energy_points){
		Energy_Points = Max_Energy_points;
		std::cout << Name << " has full Power!!!" << std::endl;
	}
	else 
		Energy_Points += amount;
}

void 	ScavTrap::takeDamage(unsigned int amount){
	if (Energy_Points == 0){
		std::cout << Name << " has been long gone..." << std::endl;	
		return ;
	}
	std::cout << Name << " says: wooooo, nNooohhh pleas don't hurt me !" << std::endl;
	if ((int)amount <= Armor_damage_reduction){
		std::cout << Name << " says just kiddin.. blocked joo whimpy ass attack" << std::endl;
		return ;
	}
	Energy_Points -= (amount - Armor_damage_reduction);
	if (Energy_Points <= 0){
		std::cout << Name << " was murdered!...." << std::endl;
		Energy_Points = 0;
		return ;
	} 
	std::cout << Name << " was severly beaten by " << (amount - Armor_damage_reduction) << std::endl;
}
