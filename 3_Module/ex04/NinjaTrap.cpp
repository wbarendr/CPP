/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 17:27:07 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/09/28 11:51:48 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(){
	std::cout << "Making a Ninja" << std::endl;
	Melee_attack_damage = 60;
	Ranged_attack_damage = 5;
	changeMax(120);
	changeMaxHit(60);
	changeHit(60);
	changeEnergy(120);
	changeArmorReduction(0);
	// Hit_Points = 60;
	// Energy_Points = 120;
	// Max_Hit_Points = 60;
	// Max_Energy_points = 120;
	// Level = 1;
	// Melee_attack_damage = 60;
	Ranged_attack_damage = 5;
	Armor_damage_reduction = 0;
}

NinjaTrap::NinjaTrap(std::string name){
	std::cout << "Making a Ninja & naming it" << std::endl;
	changeMax(120);
	changeMaxHit(60);
	changeHit(60);
	changeEnergy(120);
	changeArmorReduction(0);
	// Hit_Points = 60;
	// Energy_Points = 120;
	// Max_Hit_Points = 60;
	// Max_Energy_points = 120;
	// Level = 1;
	// Melee_attack_damage = 60;
	// Ranged_attack_damage = 5;
	// Armor_damage_reduction = 0;
	this->giveName(name);
	Melee_attack_damage = 60;
	Ranged_attack_damage = 5;
}

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

unsigned int	NinjaTrap::get_melee(){ return Melee_attack_damage; }
unsigned int	NinjaTrap::get_max_energy(){ return Max_Energy_points; }
unsigned int	NinjaTrap::get_energy(){ return Energy_Points; }

NinjaTrap::~NinjaTrap(){
	std::cout << "Destroyer of Ninja!" << std::endl;
}

void    NinjaTrap::rangedAttack(std::string const& target){
	if (hitPoints() == 0){
		std::cout << this->takeName() << " can't Trap no more..." << std::endl;	
		return ;
	}
	std::cout << "man named " << this->takeName() << " attacks " << target << " at range, causing " <<
	Ranged_attack_damage << " points of damage!" << std::endl; 
}

void	NinjaTrap::meleeAttack(std::string const& target){
	if (hitPoints() == 0){
		std::cout << this->takeName() << " can't Trap no more..." << std::endl;	
		return ;
	}
	std::cout << "man named "  << this->takeName() << " attacks " << target << " melee, causing " <<
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
