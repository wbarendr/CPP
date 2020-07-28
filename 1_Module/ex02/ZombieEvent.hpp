/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: Wester <Wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 16:42:37 by Wester        #+#    #+#                 */
/*   Updated: 2020/07/28 17:36:22 by Wester        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIEEVENT_HPP_
# define _ZOMBIEEVENT_HPP_

# include <iostream>
# include "Zombie.hpp"

class ZombieEvent {
  public:
    void    setZombieType(std::string type);
    Zombie* newZombie(std::string name);
    Zombie* randomChump();
    ZombieEvent(void);
    ~ZombieEvent(void);
    std::string type;
};

#endif