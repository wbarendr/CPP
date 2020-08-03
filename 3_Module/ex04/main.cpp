/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 14:42:22 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/08/03 21:16:12 by wbarendr      ########   odam.nl         */
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
    
    zero.vaulthunter_dot_exe("Jean");
    zero.vaulthunter_dot_exe("Jean");
    zero.ninjaShoeBox("onno");
    zero.ninjaShoeBox("onno");
    zero.vaulthunter_dot_exe("Jean");
    zero.vaulthunter_dot_exe("Jean");
    zero.ninjaShoeBox("onno");
    zero.ninjaShoeBox("onno");
    zero.ninjaShoeBox("onno");
    zero.ninjaShoeBox("onno");
    zero.rangedAttack("henk"); 
    zero.rangedAttack("henk");
    zero.NinjaTrap::beRepaired(50);
    zero.meleeAttack("willemijn");
    zero.takeDamage(50);
    zero.vaulthunter_dot_exe("Jean");
    zero.takeDamage(4);
    zero.vaulthunter_dot_exe("Batskelien");
    zero.vaulthunter_dot_exe("Jean");
    zero.takeDamage(40);
    zero.takeDamage(40);
    zero.takeDamage(40);
    zero.rangedAttack("henk");
    
    // two.challengeNewcomer("Jean");
    // two.challengeNewcomer("Jean");
    // two.challengeNewcomer("Jean");
    // two.challengeNewcomer("Jean");
    // two.rangedAttack("henk"); 
    // two.rangedAttack("henk");
    // two.beRepaired(50);
    // two.meleeAttack("willemijn");
    // two.takeDamage(9);
    // two.challengeNewcomer("Jean");
    // two.takeDamage(3);
    // two.challengeNewcomer("Batskelien");
    // two.challengeNewcomer("Jean");
    // two.takeDamage(40);
    // two.rangedAttack("henk");

    // three.ninjaShoeBox("Jean");
    // three.ninjaShoeBox("Jean");
    // three.ninjaShoeBox("Jean");
    // three.ninjaShoeBox("Jean");
    // three.rangedAttack("henk"); 
    // three.rangedAttack("henk");
    // three.beRepaired(50);
    // three.meleeAttack("willemijn");
    // three.takeDamage(9);
    // three.ninjaShoeBox("Jean");
    // three.takeDamage(3);
    // three.ninjaShoeBox("Batskelien");
    // three.ninjaShoeBox("Jean");
    // three.takeDamage(40);
    // three.rangedAttack("henk");  
    return 0;
}