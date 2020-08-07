/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 17:27:07 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/08/06 10:45:52 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(){
	changeMax(120);
	changeMaxHit(60);
	changeHit(60);
	changeEnergy(120);
	changeArmorReduction(0);
	Level = 1;
	Melee_attack_damage = 30;
	Ranged_attack_damage = 20;
	std::cout << "Making a Ninja" << std::endl;
};

NinjaTrap::NinjaTrap(std::string name){
	changeMax(120);
	changeMaxHit(60);
	changeHit(60);
	changeEnergy(120);
	changeArmorReduction(0);
	Level = 1;
	Melee_attack_damage = 30;
	Ranged_attack_damage = 20;
	std::cout << "Making a Ninja & naming it" << std::endl;
	this->giveName(name);
};

NinjaTrap::NinjaTrap(const NinjaTrap& other){
	std::cout << "hello copy" << std::endl;
	*this = other;
}

NinjaTrap&	NinjaTrap::operator=(const NinjaTrap& overload){
	std::cout << "hello operator" << std::endl;
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

NinjaTrap::~NinjaTrap(){
	std::cout << "Destroyer of Ninja!" << std::endl;
};

void    NinjaTrap::rangedAttack(std::string const& target){
	if (hitPoints() == 0){
		std::cout << this->takeName() << " the Ninja can't Trap no more..." << std::endl;	
		return ;
	}
	std::cout << "ninja-man named " << this->takeName() << " attacks " << target << " at range, causing " <<
	Ranged_attack_damage << " points of damage!" << std::endl; 
}

void	NinjaTrap::meleeAttack(std::string const& target){
	if (hitPoints() == 0){
		std::cout << this->takeName() << " the Ninja can't Trap no more..." << std::endl;	
		return ;
	}
	std::cout << "ninja-man named "  << this->takeName() << " attacks " << target << " melee, causing " <<
	Melee_attack_damage << " points of damage!" << std::endl;
}

void	NinjaTrap::ninjaShoebox(ClapTrap& other)
{
	std::cout << this->takeName() << " gives covid to " << other.takeName() << std::endl;
	other.takeDamage(80);
	return ;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap& other)
{
	std::cout << this->takeName() << " gives covid to " << other.takeName() << std::endl;
	other.takeDamage(50);
	return ;
}

void	NinjaTrap::ninjaShoebox(FragTrap& other)
{
	std::cout << this->takeName() << " gives covid to " << other.takeName() << std::endl;
	other.takeDamage(50);
	return ;
}

void	NinjaTrap::ninjaShoebox(ScavTrap& other)
{
	std::cout << this->takeName() << " gives covid to " << other.takeName() << std::endl;
	other.takeDamage(50);
	return ;
}