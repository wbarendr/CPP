/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 18:17:39 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/09/28 11:53:46 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(){
	std::cout << "Making a supa troupa! " << std::endl;
    Level = 1;
	Hit_Points = get_hit();
    Max_Hit_Points = get_max_hit();
    Energy_Points = get_energy();
    Max_Energy_points = get_max_energy();
    Melee_attack_damage = get_melee();
    Armor_damage_reduction = get_armor();
    Ranged_attack_damage = get_ranged();
	std::cout << "Making a supa troupa & naming it" << std::endl;
}

SuperTrap::SuperTrap(std::string name){
    Level = 1;
    Hit_Points = get_hit();
    Max_Hit_Points = get_max_hit();
    Energy_Points = get_energy();
    Max_Energy_points = get_max_energy();
    Melee_attack_damage = get_melee();
    Armor_damage_reduction = get_armor();
    Ranged_attack_damage = get_ranged();
	std::cout << "Making a supa troupa & naming it" << std::endl;
	FragTrap::giveName(name);
	NinjaTrap::giveName(name);
}

SuperTrap::SuperTrap(const SuperTrap& other){
	*this = other;
}

SuperTrap&	SuperTrap::operator=(const SuperTrap& overload){
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

void	SuperTrap::print_vars(void)
{
	std::cout << this->Hit_Points << std::endl;
	std::cout << this->Energy_Points << std::endl;
	std::cout << this->Max_Hit_Points << std::endl;
	std::cout << this->Max_Energy_points << std::endl;
	std::cout << this->Melee_attack_damage << std::endl;
	std::cout << this->Armor_damage_reduction << std::endl;
    std::cout << this->Ranged_attack_damage << std::endl;
}

void    SuperTrap::meleeAttack(std::string const& target){ NinjaTrap::meleeAttack(target); }
void    SuperTrap::rangedAttack(std::string const& target){ FragTrap::rangedAttack(target); }
void	SuperTrap::beRepaired(int num){ NinjaTrap::beRepaired(num); }
void    SuperTrap::takeDamage(unsigned int num){ FragTrap::takeDamage(num); }

SuperTrap::~SuperTrap(){
	std::cout << "Destroyer of all supa's!" << std::endl;
}
