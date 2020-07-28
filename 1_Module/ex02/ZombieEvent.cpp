/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: Wester <Wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 16:54:47 by Wester        #+#    #+#                 */
/*   Updated: 2020/07/28 18:02:58 by Wester        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void    ZombieEvent::setZombieType(std::string type)
{
    this->type = type;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
    Zombie* newZom = new Zombie();

    newZom->type = this->type;
    newZom->name = name;
    return newZom;
}

ZombieEvent::ZombieEvent(){};
ZombieEvent::~ZombieEvent(){};

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
