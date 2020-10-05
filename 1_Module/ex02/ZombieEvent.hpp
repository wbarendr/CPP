/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: Wester <Wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 16:42:37 by Wester        #+#    #+#                 */
/*   Updated: 2020/10/04 15:03:38 by wester        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIEEVENT_HPP_
# define _ZOMBIEEVENT_HPP_

# include <iostream>
# include "Zombie.hpp"
# include <cstdlib>

class ZombieEvent 
{
    std::string _type;
    
  public:
    ZombieEvent(void);
    ~ZombieEvent(void);
    void    setZombieType(std::string type);
    Zombie* newZombie(std::string name);
    Zombie* randomChump();
};

#endif
