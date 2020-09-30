/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/03 14:42:22 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/09/28 11:41:54 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int     main(void)
{
    FragTrap one("Billy");
    ScavTrap two("Orlando");
    
    one.vaulthunter_dot_exe("Jean");
    one.vaulthunter_dot_exe("Jean");
    one.vaulthunter_dot_exe("Jean");
    one.vaulthunter_dot_exe("Jean");
    one.vaulthunter_dot_exe("Jean");
    one.rangedAttack("henk"); 
    one.rangedAttack("henk");
    one.beRepaired(50);
    one.meleeAttack("willemijn");
    one.takeDamage(10);
    one.vaulthunter_dot_exe("Jean");
    one.takeDamage(4);
    one.vaulthunter_dot_exe("Batskelien");
    one.vaulthunter_dot_exe("Jean");
    one.takeDamage(40);
    one.rangedAttack("henk");
    two.challengeNewcomer("Jean");
    two.challengeNewcomer("Jean");
    two.challengeNewcomer("Jean");
    two.challengeNewcomer("Jean");
    two.challengeNewcomer("Jean");
    two.rangedAttack("henk"); 
    two.rangedAttack("henk");
    two.beRepaired(50);
    two.meleeAttack("willemijn");
    two.takeDamage(10);
    two.challengeNewcomer("Jean");
    two.takeDamage(3);
    two.challengeNewcomer("Batskelien");
    two.challengeNewcomer("Jean");
    two.takeDamage(40);
    two.rangedAttack("henk");  
    return 0;
}
