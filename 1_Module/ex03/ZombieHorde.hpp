/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: Wester <Wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 18:27:43 by Wester        #+#    #+#                 */
/*   Updated: 2020/07/28 20:17:53 by Wester        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZombieHorde_HPP_
# define _ZombieHorde_HPP_

# include <iostream>
# include <string.h>
# include "Zombie.hpp"

class ZombieHorde {
  public:
    Zombie *z_team;
    int number;
    ZombieHorde(int N);
    ~ZombieHorde();
};

#endif