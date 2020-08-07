/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 12:42:41 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/08/07 12:46:26 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Radscorpion.hpp"

RadScorpion::RadScorpion(std::string const& type, int hp):
   Enemy(80, "RadScorpion"){
       std::cout <<  "* click click click *" << std::endl;
   };

RadScorpion::~RadScorpion(){
    std::cout << "* SPROTCH *" << std::endl;
};

RadScorpion::RadScorpion(const RadScorpion& other){
	*this = other;
};

RadScorpion&    RadScorpion::operator=(const RadScorpion& other){
	setHP(other.getHP);
	setType(other.getType);
    return *this;
}
