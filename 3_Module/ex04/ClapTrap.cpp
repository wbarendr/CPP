/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 15:28:06 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/09/28 11:50:08 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	std::cout << "Making a claptrap" << std::endl;
	Hit_Points = 0;
	Energy_Points = 0;
	Max_Hit_Points = 0;
	Max_Energy_points = 0;
	Level = 1;
	Melee_attack_damage = 0;
	Ranged_attack_damage = 0;
	Armor_damage_reduction = 0;
}

ClapTrap::ClapTrap(std::string name){
	std::cout << "Making a claptrap & naming it" << std::endl;
	Hit_Points = 0;
	Energy_Points = 0;
	Max_Hit_Points = 0;
	Max_Energy_points = 0;
	Level = 1;
	Melee_attack_damage = 0;
	Ranged_attack_damage = 0;
	Armor_damage_reduction = 0;
	Name = name;
}

ClapTrap::ClapTrap(const ClapTrap& other){
	*this = other;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& overload){
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

ClapTrap::~ClapTrap(){
	std::cout << "Destroyer of claptrap" << std::endl;
}

void	ClapTrap::giveName(std::string name){
	Name = name;
}

std::string ClapTrap::takeName(){
	return Name;
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (energyPoints() == 0){
		std::cout << Name << " has been long gone..." << std::endl;	
		return ;
	}
	std::cout << "Healing by " << amount << " points :)" << std::endl;
	changeEnergy(amount);
	changeHit(amount);
}

void 	ClapTrap::takeDamage(unsigned int amount){
	if (hitPoints() == 0){
		std::cout << Name << " has been long gone..." << std::endl;	
		return ;
	}
	std::cout << Name << " says: wooooo, nNooohhh pleas don't hurt me !" << std::endl;
	if ((int)amount <= Armor_damage_reduction){
		std::cout << Name << " says just kiddin.. blocked joo whimpy ass attack" << std::endl;
		return ;
	}
	changeHit((unsigned int)(amount - Armor_damage_reduction) * -1);
	if (hitPoints() <= 0){
		std::cout << Name << " was murdered!...." << std::endl;
		changeHit(0);
		return ;
	} 
	std::cout << Name << " was severely beaten by " << (amount - Armor_damage_reduction) << std::endl;
}

void	ClapTrap::changeEnergy(unsigned int num){
	if (Energy_Points + (int)num > Max_Energy_points){
		Energy_Points = Max_Energy_points;
		std::cout << Name << " has full Energy!!!" << std::endl;
	}
	else
		Energy_Points += num;
}

int		ClapTrap::energyPoints(){
	return Energy_Points; 
}

void	ClapTrap::changeHit(unsigned int num){
	if (num == 0) {
		Hit_Points = 0;
		return ;
	}
	if (Hit_Points + (int)num > Max_Hit_Points){
		Hit_Points = Max_Hit_Points;
		std::cout << Name << " has full Hit!!!" << std::endl;
	}
	else
		Hit_Points += num;
}

int		ClapTrap::hitPoints(){
	return Hit_Points; 
}

void	ClapTrap::changeArmorReduction(int num){
	Armor_damage_reduction = num;
}

int		ClapTrap::Max_Energy(){
	return Max_Hit_Points;
}

void	ClapTrap::changeMax(unsigned int num){
	Max_Energy_points = num;	
}

int		ClapTrap::Max_Hit(){
	return Max_Hit_Points;
}

void	ClapTrap::changeMaxHit(unsigned int num){
	Max_Hit_Points = num;
}
