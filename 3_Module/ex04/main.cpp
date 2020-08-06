/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 14:42:22 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/08/05 13:33:56 by Wester        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int     main(void)
{
    SuperTrap zero("Wilfred"); 
    // FragTrap one("Billy");
    // ScavTrap two("Orlando");
    // NinjaTrap three("Funghi");
    zero.print_vars();
    zero.vaulthunter_dot_exe("Jean");
    zero.vaulthunter_dot_exe("Jean");
    // zero.ninjaShoebox(one);
    zero.vaulthunter_dot_exe("Jean");
    zero.vaulthunter_dot_exe("Jean");
    // zero.ninjaShoebox(two);
    // zero.ninjaShoebox(three);
    zero.rangedAttack("henk"); 
    zero.rangedAttack("henk");
    zero.beRepaired(50);
    zero.meleeAttack("willemijn");
    zero.takeDamage(50);
    zero.vaulthunter_dot_exe("Jean");
    zero.takeDamage(4);
    zero.vaulthunter_dot_exe("Batskelien");
    zero.vaulthunter_dot_exe("Jean");
    zero.takeDamage(40);
    zero.takeDamage(40);
    zero.takeDamage(40);
    
    zero.print_vars();
    zero.rangedAttack("henk");
    
    return 0;
}