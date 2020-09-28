/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: Wester <Wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 16:31:13 by Wester        #+#    #+#                 */
/*   Updated: 2020/09/25 13:44:10 by wester        ########   odam.nl         */
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

void    Zombie::randomChump(void)
{
    std::string     name;
    std::string     pool[] = {"jan", "piet", "kees", "bas", "Batskelien"};
    int             num;
    static int      yes = 1;
    
    if (yes == 1){
        srand(time(NULL));
        yes = 0;
    }
    num = rand() % 5;
    name = pool[num];
    this->_name = name;
}
