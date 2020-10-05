/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wester <wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/25 12:24:06 by wester        #+#    #+#                 */
/*   Updated: 2020/10/04 15:03:59 by wester        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

void        make_zombies(void){
    ZombieHorde squad = ZombieHorde(5);
    
    squad.announce();
}

int         main(void)
{
    make_zombies();
    // system("leaks a.out | grep bytes");
    return 0;
}
