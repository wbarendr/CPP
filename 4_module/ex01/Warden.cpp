/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Warden.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/08 15:50:53 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/10/08 15:53:08 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Warden.hpp"

Warden::Warden():
   Enemy(10100, "very scary warden"){
       std::cout << "Where are some kids I need to put in detention" << std::endl;
}

Warden::~Warden(){
    std::cout << "noooooooooo.." << std::endl;
}

Warden::Warden(const Warden& other){
	*this = other;
}

Warden&    Warden::operator=(const Warden& other){
	setHP(other.getHP());
	setType(other.getType());
    return *this;
}


void        Warden::takeDamage(int damage){
    damage -= 10;
    if (damage <= 0)
        return ;
    if (getHP() - damage <= 0){
        setHP(0);
    }
    else
        setHP(getHP() - damage);
}
