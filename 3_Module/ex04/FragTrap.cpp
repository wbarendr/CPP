/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 11:51:07 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/08/03 21:16:46 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(){
	changeMax(100);
	changeMaxHit(100);
	changeHit(100);
	changeEnergy(100);
	changeArmorReduction(5);
	std::cout << "Constructing FragTrap" << std::endl;
};

FragTrap::FragTrap(std::string name){
	changeMax(100);
	changeMaxHit(100);
	changeHit(100);
	changeEnergy(100);
	changeArmorReduction(5);
	std::cout << "Constructing FragTrap && naming it" << std::endl;
	this->giveName(name);
}

unsigned int	FragTrap::get_ranged(){ return Ranged_attack_damage; }
unsigned int	FragTrap::get_armor(){ return Armor_damage_reduction; }
unsigned int	FragTrap::get_hit(){ return Hit_Points; }
unsigned int	FragTrap::get_max_hit(){ return Max_Hit_Points; }

FragTrap::~FragTrap(){
	std::cout << "Destructing FragTrap" << std::endl;
};

void    FragTrap::rangedAttack(std::string const& target){
	if (hitPoints() == 0){
		std::cout << this->takeName() << " is already dead.." << std::endl;	
		return ;
	}
	std::cout << "FR4G-TP " << this->takeName() << " attacks " << target << " at range, causing " <<
	Ranged_attack_damage << " points of damage!" << std::endl; 
}

void	FragTrap::meleeAttack(std::string const& target){
	if (hitPoints() == 0){
		std::cout << this->takeName() << " is already dead.." << std::endl;	
		return ;
	}
	std::cout << "FR4G-TP " << this->takeName() << " attacks " << target << " melee, causing " <<
	Melee_attack_damage << " points of damage!" << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const& target){
	if (hitPoints() == 0){
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
	std::cout << "checking vault: " << energyPoints() << std::endl; 
	if (energyPoints() <= 25){
		std::cout << this->takeName() << " doesn't have enough energy." << std::endl;	
		return ;
	}
	std::cout << this->takeName() << attacks[num] << " of " << target << std::endl;
	changeEnergy(-25);
}