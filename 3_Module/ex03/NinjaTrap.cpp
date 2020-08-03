/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 17:27:07 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/08/03 17:58:01 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(){
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
};

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

void	NinjaTrap::ninjaShoeBox(std::string const& target){
	if (hitPoints() == 0){
		std::cout << this->takeName() << " the Ninja can't Trap no more..." << std::endl;	
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
	if (energyPoints() <= 10){
		std::cout << this->takeName() << " is low on energy." << std::endl;	
		return ;
	}
	std::cout << this->takeName() << attacks[num] << target << std::endl;
	changeEnergy(-10);
}