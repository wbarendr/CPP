/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: Wester <Wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 18:27:34 by Wester        #+#    #+#                 */
/*   Updated: 2020/07/28 20:18:13 by Wester        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

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
    this->name = name;
}

ZombieHorde::ZombieHorde(int N): number(N)
{
    this->z_team = new Zombie[N]();

    for(int i = 0; i < N; ++i)
    {
        this->z_team[i].type = "nerd";
        this->z_team[i].randomChump();
    }
}

ZombieHorde::~ZombieHorde()
{
};

int         main(void)
{
    ZombieHorde squad = ZombieHorde(5);
    
    for(int i = 0; i < squad.number; ++i)
        squad.z_team[i].announce();
}