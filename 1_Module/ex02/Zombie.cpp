/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: Wester <Wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 16:31:13 by Wester        #+#    #+#                 */
/*   Updated: 2020/09/25 11:48:26 by wester        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::~Zombie(){}

void        Zombie::announce(){
	std::cout << "<" << _name << " (" << _type << ")> Braiiiiiiiiiinnnnnssss..." << std::endl;
}
		
        
void		Zombie::change_name(std::string new_name){
	this->_name = new_name;
}
		
void		Zombie::change_type(std::string new_type){
	this->_type = new_type;
}
