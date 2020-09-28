/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: Wester <Wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 18:27:34 by Wester        #+#    #+#                 */
/*   Updated: 2020/09/25 14:01:28 by wester        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N){
    _num = N;
    _zombieTeam = new Zombie[N]();

    for(int i = 0; i < N; ++i)
    {
        this->_zombieTeam[i].change_type("nerd");
        this->_zombieTeam[i].randomChump();
    }
}

Zombie    ZombieHorde::getZombieTeam(int n){
    return _zombieTeam[n];
}

ZombieHorde::~ZombieHorde()
{}
int         ZombieHorde::getNum(void) const{
    return _num;
}
