/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 11:51:07 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/08/04 16:49:53 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(){
	Hit_Points = 100;
	Energy_Points = 100;
	Max_Hit_Points = 100;
	Max_Energy_points = 100;
	Level = 1;
	Melee_attack_damage = 30;
	Ranged_attack_damage = 20;
	Armor_damage_reduction = 5;
	std::cout << "Constructing FragTrap" << std::endl;
};

FragTrap::FragTrap(std::string name){
	Hit_Points = 100;
	Energy_Points = 100;
	Max_Hit_Points = 100;
	Max_Energy_points = 100;
	Level = 1;
	Melee_attack_damage = 30;
	Ranged_attack_damage = 20;
	Armor_damage_reduction = 5;
	std::cout << "Constructing FragTrap && naming it" << std::endl;
	this->giveName(name);
}

FragTrap::FragTrap(const FragTrap& other){
	std::cout << "hello copy" << std::endl;
	*this = other;
}

FragTrap&	FragTrap::operator=(const FragTrap& overload){
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

FragTrap::~FragTrap(){
	std::cout << "Destructing FragTrap" << std::endl;
};

void    FragTrap::rangedAttack(std::string const& target){
	if (energyPoints() == 0){
		std::cout << this->takeName() << " is already dead.." << std::endl;	
		return ;
	}
	std::cout << "FR4G-TP " << this->takeName() << " attacks " << target << " at range, causing " <<
	Ranged_attack_damage << " points of damage!" << std::endl; 
}

void	FragTrap::meleeAttack(std::string const& target){
	if (energyPoints() == 0){
		std::cout << this->takeName() << " is already dead.." << std::endl;	
		return ;
	}
	std::cout << "FR4G-TP " << this->takeName() << " attacks " << target << " melee, causing " <<
	Melee_attack_damage << " points of damage!" << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const& target){
	if (energyPoints() == 0){
		std::cout << this->takeName() << " is already dead.." << std::endl;	
		return ;
	}
	std::string attacks[] = {" tickles feet", " hacks computer", " disses the mother", " puts diary on the internet", " puts diarrhea pills in coffee"} ;
	static int yes = 1;
	int num; 
		
	if (yes == 1){
        srand(time(NULL));
        yes = 0;
    }
    num = rand() % 5;
	if (energyPoints() <= 25){
		std::cout << this->takeName() << " doesn't have enough energy." << std::endl;	
		return ;
	}
	std::cout << this->takeName() << attacks[num] << " of " << target << std::endl;
	changeEnergy(-25);
}