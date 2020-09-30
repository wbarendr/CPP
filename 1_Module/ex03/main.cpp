/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wester <wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/25 12:24:06 by wester        #+#    #+#                 */
/*   Updated: 2020/09/28 14:59:36 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

void        make_zombies(void){
    ZombieHorde squad = ZombieHorde(5);
    
    for(int i = 0; i < squad.getNum(); ++i)
        squad.getZombieTeam(i).announce();
}

int         main(void)
{
    make_zombies();
    system("leaks a.out | grep bytes");
    return 0;
}
