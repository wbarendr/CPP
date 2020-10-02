/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/01 12:50:58 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/10/02 16:08:45 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ISquad.hpp"
#include "Squad.hpp"
#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "NakedMoleRat.hpp"

void    call_function(void){
    ISpaceMarine* Bob = new TacticalMarine;
    ISpaceMarine* Jim = new AssaultTerminator;
    ISpaceMarine* Kees = new TacticalMarine;
    ISpaceMarine* Tim = new AssaultTerminator;
    ISpaceMarine* Robbo = new TacticalMarine;
    ISpaceMarine* Simon = new AssaultTerminator;
    ISpaceMarine* Genet = new NakedMoleRat;
    
    ISquad* vlc = new Squad;
    vlc->push(Bob);
    vlc->push(Jim);
    vlc->push(Tim);
    vlc->push(Kees);
    vlc->push(Robbo);
    vlc->push(Simon);
    vlc->push(Genet);
    for (int i = 0; i < vlc->getCount(); ++i)
    {
        ISpaceMarine* cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    delete vlc;
    
}

void    call_function1()
{
    ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* jim = new AssaultTerminator;
    ISquad* vlc = new Squad;
    vlc->push(bob);
    vlc->push(jim);
    for (int i = 0; i < vlc->getCount(); ++i)
    {
        ISpaceMarine* cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    delete vlc;
}

int main()
{
    // call_function();
    call_function1();
    // system("leaks a.out | grep bytes");

    return 0;
}
