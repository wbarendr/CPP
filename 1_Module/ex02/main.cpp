/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Wester <Wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 17:57:37 by Wester        #+#    #+#                 */
/*   Updated: 2020/07/28 18:03:49 by Wester        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int     main(void)
{
    ZombieEvent event;
    Zombie* neww;

    event.setZombieType("nerd");
    neww = event.randomChump();
    neww->announce();
    delete neww;
    return 0;
}
