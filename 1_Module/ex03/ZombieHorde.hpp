/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: Wester <Wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 18:27:43 by Wester        #+#    #+#                 */
/*   Updated: 2020/09/25 13:56:07 by wester        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZombieHorde_HPP_
# define _ZombieHorde_HPP_

# include "Zombie.hpp"

class ZombieHorde 
{
    int       _num;
    Zombie*   _zombieTeam;
  public:
    ZombieHorde(int N);
    ~ZombieHorde();
    int       getNum() const;
    Zombie    getZombieTeam(int n);
};

#endif
