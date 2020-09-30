/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 12:55:59 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/09/28 11:52:14 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	std::cout << "Making a Scav" << std::endl;
	changeMax(50);
	changeMaxHit(100);
	changeHit(100);
	changeEnergy(50);
	changeArmorReduction(3);
	Melee_attack_damage = 20;
    Ranged_attack_damage = 15;
}

ScavTrap::ScavTrap(std::string name){
	changeMax(50);
	changeMaxHit(100);
	changeHit(100);
	changeEnergy(50);
	changeArmorReduction(3);
	Melee_attack_damage = 20;
    Ranged_attack_damage = 15;

	std::cout << "Making a scav & naming it" << std::endl;
	this->giveName(name);
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
}

void    ScavTrap::rangedAttack(std::string const& target){
	if (hitPoints() == 0){
		std::cout << this->takeName() << " has been long gone..." << std::endl;	
		return ;
	}
	std::cout << "The little scav named " << this->takeName() << " attacks " << target << " at range, causing " <<
	Ranged_attack_damage << " points of damage!" << std::endl; 
}

void	ScavTrap::meleeAttack(std::string const& target){
	if (hitPoints() == 0){
		std::cout << this->takeName() << " Scav has been long gone..." << std::endl;	
		return ;
	}
	std::cout << "The little scav named "  << this->takeName() << " attacks " << target << " melee, causing " <<
	Melee_attack_damage << " points of damage!" << std::endl;
}

void	ScavTrap::challengeNewcomer(std::string const& target){
	if (hitPoints() == 0){
		std::cout << this->takeName() << " Scav has been long gone..." << std::endl;	
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
	if (energyPoints() <= 20){
		std::cout << this->takeName() << " is low on energy." << std::endl;	
		return ;
	}
	std::cout << this->takeName() << " challenges " << target << " to " << attacks[num] << std::endl;
	changeEnergy(-20);
}
