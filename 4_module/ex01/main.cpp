/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 13:34:42 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/09/28 12:25:58 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "AWeapon.hpp"
# include "Enemy.hpp"
# include "PowerFist.hpp"
# include "PlasmaRifle.hpp"
# include "Character.hpp"
# include "RadScorpion.hpp"
# include "Embarrass.hpp"

int main()
{
    Character* me = new Character("me");
    
    std::cout << *me;
    
    Enemy* b = new RadScorpion();
    
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
    
    // while(1);
    
    return 0;
}
