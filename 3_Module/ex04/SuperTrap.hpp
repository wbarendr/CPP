/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 18:15:20 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/10/01 14:08:35 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SUPERTRAP_HPP_
# define _SUPERTRAP_HPP_

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public NinjaTrap, public FragTrap{
  public:
    SuperTrap();
    SuperTrap(std::string name);
    SuperTrap(const SuperTrap& other);
		SuperTrap&		operator=(const SuperTrap &overload);
    virtual ~SuperTrap();
    void print_vars();
    void rangedAttack(std::string const& target);
    void meleeAttack(std::string const& target);
    void takeDamage(unsigned int num);
    void beRepaired(int num); 
};

#endif
