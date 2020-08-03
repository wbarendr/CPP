/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 17:26:06 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/08/03 17:36:23 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _NINJATRAP_HPP_
# define _NINJATRAP_HPP_

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class NinjaTrap : public ClapTrap{
  private:
    const static int Melee_attack_damage = 60;
    const static int Ranged_attack_damage = 5;

  public:
    NinjaTrap();
    NinjaTrap(std::string name);
    ~NinjaTrap();
    void rangedAttack(std::string const& target);
    void meleeAttack(std::string const& target);
    void ninjaShoeBox(std::string const& target);
};

#endif