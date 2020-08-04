/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 11:51:07 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/08/04 16:28:36 by wbarendr      ########   odam.nl         */
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
	Name = name;
}

FragTrap::FragTrap(const FragTrap& other){
	*this = other;
}

FragTrap&	FragTrap::operator=(const FragTrap& overload){
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
};

FragTrap::~FragTrap(){
	std::cout << "Destructing FragTrap" << std::endl;
};

void    FragTrap::rangedAttack(std::string const& target){
	if (Energy_Points == 0){
		std::cout << Name << " is already dead.." << std::endl;	
		return ;
	}
	std::cout << "FR4G-TP " << Name << " attacks " << target << " at range, causing " <<
	Ranged_attack_damage << " points of damage!" << std::endl; 
}

void	FragTrap::beRepaired(unsigned int amount){
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

void 	FragTrap::takeDamage(unsigned int amount){
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

void	FragTrap::meleeAttack(std::string const& target){
	if (Energy_Points == 0){
		std::cout << Name << " is already dead.." << std::endl;	
		return ;
	}
	std::cout << "FR4G-TP " << Name << " attacks " << target << " melee, causing " <<
	Melee_attack_damage << " points of damage!" << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const& target){
	if (Energy_Points == 0){
		std::cout << Name << " is already dead.." << std::endl;	
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
	if (Energy_Points <= 25){
		std::cout << Name << " doesn't have enough energy." << std::endl;	
		return ;
	}
	std::cout << Name << attacks[num] << " of " << target << std::endl;
	Energy_Points -= 25;
}