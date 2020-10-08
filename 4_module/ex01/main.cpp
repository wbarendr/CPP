/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 13:34:42 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/10/08 16:18:15 by wbarendr      ########   odam.nl         */
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
# include "Flamethrower.hpp"
# include "Warden.hpp"


void        call_function(void)
{
    Character* me = new Character("me");
    
    std::cout << *me;
    
    Enemy* b = new RadScorpion();
    
    Enemy* bad = new SuperMutant();
    
    Enemy* War = new Warden();
    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();
    AWeapon* pl = new Embarrass();
    AWeapon* fire = new Flamethrower();
    
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
    
    std::cout << std::endl << std::endl;
    std::cout << "hp of mutant: " << bad->getHP() << std::endl;
    std::cout << "attack genant should hurt " << pl->getDamage() << std::endl;
    me->attack(bad);
    std::cout << "hp of mutant: " << bad->getHP() << std::endl;
    std::cout << *me;

    std::cout << std::endl << std::endl;
    std::cout << "hp of warden: " << War->getHP() << std::endl; 
    me->equip(fire);
    for (int i = 0; i < 20; ++i){
        if (i % 5 == 0)
               me->recoverAP();
        me->attack(War);
    }
    
    std::cout << "it has no use... I give up.." << std::endl; 
    std::cout << "hp of warden: " << War->getHP() << std::endl;
    if (War->getHP() != 0)
        delete War;
    std::cout << "hp of b: " << b->getHP() << std::endl;
    if (b->getHP() != 0)
        delete b;
    std::cout << "hp of bad: " << bad->getHP() << std::endl;
    if (bad->getHP() != 0){
        delete bad;
    }
    delete fire;
    delete me;
    delete pr;
    delete pf;
    delete pl;
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
    system("leaks a.out | grep bytes");

    return 0;
}
