/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 12:44:07 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/08/01 14:32:33 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int     main(void)
{
    FragTrap one("Billy");

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
    return 0;
}