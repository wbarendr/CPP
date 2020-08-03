/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 11:43:56 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/08/03 16:38:45 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FRAGTRAP_HPP_
# define _FRAGTRAP_HPP_

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class FragTrap : public ClapTrap{
  private:
    const static int Melee_attack_damage = 30;
    const static int Ranged_attack_damage = 20;

  public:
    FragTrap();
    FragTrap(std::string name);
    ~FragTrap();
    void rangedAttack(std::string const& target);
    void meleeAttack(std::string const& target);
    void vaulthunter_dot_exe(std::string const& target);
};

#endif