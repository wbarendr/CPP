/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 12:44:07 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/08/04 16:23:14 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int     main(void)
{
    FragTrap one("Billy");
    FragTrap two(one);

    
    two.vaulthunter_dot_exe("Jean");
    two.vaulthunter_dot_exe("Jean");
    two.vaulthunter_dot_exe("Jean");
    two.vaulthunter_dot_exe("Jean");
    two.vaulthunter_dot_exe("Jean");
    two.rangedAttack("henk"); 
    two.rangedAttack("henk");
    two.beRepaired(50);
    two.meleeAttack("willemijn");
    two.takeDamage(10);
    two.vaulthunter_dot_exe("Jean");
    two.takeDamage(4);
    two.vaulthunter_dot_exe("Batskelien");
    two.vaulthunter_dot_exe("Jean");
    two.takeDamage(40);
    two.rangedAttack("henk"); 
    return 0;
}