/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 13:34:42 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/10/02 16:08:08 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "AWeapon.hpp"
# include "Enemy.hpp"
# include "PowerFist.hpp"
# include "PlasmaRifle.hpp"
# include "Character.hpp"
# include "RadScorpion.hpp"
# include "Embarrass.hpp"
# include "SuperMutant.hpp"


void        call_function(void)
{
    Character* me = new Character("me");
    
    std::cout << *me;
    
    Enemy* b = new RadScorpion();
    
    Enemy* bad = new SuperMutant();
    
    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();
    AWeapon* pl = new Embarrass();

    me->equip(pr);
    std::cout << *me;
    me->equip(pf);
    
    me->attack(b);
    std::cout << *me;
    me->equip(pr);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    me->equip(pl);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    me->attack(bad);
    std::cout << *me;
    
    delete me;
    delete pr;
    delete pf;
    delete pl;
    delete bad;
}

void        call_function1(void)
{
    Character* me = new Character("me");
    
    std::cout << *me;
    
    Enemy* b = new RadScorpion();
    
    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();
    
    me->equip(pr);
    std::cout << *me;
    me->equip(pf);
    
    me->attack(b);
    std::cout << *me;
    me->equip(pr);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;

    delete me;

    delete pr;
    delete pf;
}

int main()
{
    // call_function();
    call_function1();
    // system("leaks a.out | grep bytes");

    return 0;
}
