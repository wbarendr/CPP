/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wester <wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/25 12:24:06 by wester        #+#    #+#                 */
/*   Updated: 2020/09/25 14:01:06 by wester        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int         main(void)
{
    ZombieHorde squad = ZombieHorde(5);
    
    for(int i = 0; i < squad.getNum(); ++i)
        squad.getZombieTeam(i).announce();
    // system("leaks a.out | grep bytes");
    return 0;
}
