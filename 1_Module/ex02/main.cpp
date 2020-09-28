/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Wester <Wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 17:57:37 by Wester        #+#    #+#                 */
/*   Updated: 2020/09/25 12:06:27 by wester        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int     main(void)
{
    ZombieEvent     event;
    Zombie*         neww;
    Zombie*         neww2;

    event.setZombieType("nerd");
    neww = event.randomChump();
    event.setZombieType("mega_nerd");
    neww2 = event.randomChump();
    neww->announce();
    neww2->announce();
    delete neww;
    delete neww2;
    return 0;
}
