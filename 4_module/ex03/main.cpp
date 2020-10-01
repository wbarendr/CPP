/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/02 14:12:12 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/10/01 15:04:23 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"
#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Fire.hpp"

void    call_function(void){
    IMateriaSource* src = new MateriaSource();
    
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Fire());
    
    ICharacter* me = new Character("me");
    AMateria* tmp;
    AMateria* tmp2;
    
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("fire");
    me->equip(tmp);
    tmp2 = tmp->clone();
    tmp = src->createMateria("ice");
    me->equip(tmp2);
    
    me->equip(tmp);
    
    tmp = src->createMateria("cure");
    me->equip(tmp);

    
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    me->use(2, *bob);
    me->use(3, *bob);
    me->use(4, *bob);
    me->use(5, *bob);
    
    delete bob;
    delete me;
    delete src;
}

void        call_function1(void)
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    
    ICharacter* me = new Character("me");
    AMateria* tmp;
    
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    
    delete bob;
    delete me;
    delete src;
}

int main()
{
    
    // call_function();
    call_function1();
    system("leaks a.out | grep bytes");
    return 0;
}
