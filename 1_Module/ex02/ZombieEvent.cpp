/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: Wester <Wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 16:54:47 by Wester        #+#    #+#                 */
/*   Updated: 2020/09/25 11:44:36 by wester        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void    ZombieEvent::setZombieType(std::string type)
{
    _type = type;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
    Zombie* newZom = new Zombie();

    newZom->change_type(this->_type);
    newZom->change_name(name);
    return newZom;
}

ZombieEvent::ZombieEvent(){}
ZombieEvent::~ZombieEvent(){}

Zombie* ZombieEvent::randomChump(void)
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
    return this->newZombie(name);
}
