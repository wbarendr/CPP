/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 17:27:07 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/08/03 21:16:58 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(){
	Melee_attack_damage = 60;
	Ranged_attack_damage = 5;
	changeMax(120);
	changeMaxHit(60);
	changeHit(60);
	changeEnergy(120);
	changeArmorReduction(0);
	std::cout << "Making a Ninja" << std::endl;
};

NinjaTrap::NinjaTrap(std::string name){
	changeMax(120);
	changeMaxHit(60);
	changeHit(60);
	changeEnergy(120);
	changeArmorReduction(0);
	std::cout << "Making a Ninja & naming it" << std::endl;
	this->giveName(name);
	// set_hit();
	// set_energy();
	// set_armor();
	Melee_attack_damage = 60;
	Ranged_attack_damage = 5;
};

// void	NinjaTrap::set_hit(){
// 	Hit_Points = 60
// 	return Hit_Points;
// }

// void	NinjaTrap::set_energy(){
// 	Energy_Points = 120;
// }

// void	NinjaTrap::set_armor(){
// 	Armor_damage_reduction = 0;
// }

unsigned int	NinjaTrap::get_melee(){ return Melee_attack_damage; }
unsigned int	NinjaTrap::get_max_energy(){ return Max_Energy_points; }
unsigned int	NinjaTrap::get_energy(){ return Energy_Points; }

// unsigned int	NinjaTrap::get_ranged(){
// 	return Ranged_attack_damage;
// }

NinjaTrap::~NinjaTrap(){
	std::cout << "Destroyer of Ninja!" << std::endl;
};

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

void	NinjaTrap::ninjaShoeBox(std::string const& target){
	if (hitPoints() == 0){
		std::cout << this->takeName() << " can't Trap no more..." << std::endl;	
		return ;
	}
	std::string attacks[] = {" sneezes on ", " shakes hands with ", " touches keyboard of ", " gives covid to ", " kicks "} ;
	static int yes = 1;
	int num; 
		
	if (yes == 1){
        srand(time(NULL));
        yes = 0;
    }
    num = rand() % 5;
	std::cout << "checking Ninja: " << energyPoints() << std::endl; 

	if (energyPoints() <= 25){
		std::cout << this->takeName() << " is low on energy." << std::endl;	
		return ;
	}
	std::cout << this->takeName() << attacks[num] << target << std::endl;
	changeEnergy(-25);
}