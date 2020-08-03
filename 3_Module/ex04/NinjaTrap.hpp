/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 17:26:06 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/08/03 20:30:10 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _NINJATRAP_HPP_
# define _NINJATRAP_HPP_

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class NinjaTrap : public ClapTrap{
  protected:
    
  public:
    NinjaTrap();
    NinjaTrap(std::string name);
    ~NinjaTrap();
    void rangedAttack(std::string const& target);
    void meleeAttack(std::string const& target);
    void ninjaShoeBox(std::string const& target);
    unsigned int get_melee();
    unsigned int get_max_energy();
    unsigned int get_energy();
    // void set_armor();
    // void set_energy();
    // unsigned int set_hit();
};

#endif