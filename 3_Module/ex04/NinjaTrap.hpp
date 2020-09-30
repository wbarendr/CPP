/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 17:26:06 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/09/28 11:52:01 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _NINJATRAP_HPP_
# define _NINJATRAP_HPP_

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : public virtual ClapTrap{
  protected:
    
  public:
    NinjaTrap();
    NinjaTrap(std::string name);
    NinjaTrap(const NinjaTrap& other);
		NinjaTrap&		operator=(const NinjaTrap &overload);
    virtual ~NinjaTrap();
    void rangedAttack(std::string const& target);
    void meleeAttack(std::string const& target);
    void ninjaShoebox(ClapTrap& other);
    void ninjaShoebox(NinjaTrap& other);
    void ninjaShoebox(FragTrap& other);
    void ninjaShoebox(ScavTrap& other);
    unsigned int get_melee();
    unsigned int get_max_energy();
    unsigned int get_energy();
};

#endif
