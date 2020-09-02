/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AssaultTerminator.cpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/31 17:04:06 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/09/02 12:35:15 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(){
	std::cout <<  "* teleports from space *" << std::endl;
};

AssaultTerminator::~AssaultTerminator(){
	std::cout <<  "I\'ll be back..." << std::endl;
};

AssaultTerminator::AssaultTerminator( const AssaultTerminator& other){
	std::cout <<  "* teleports from space *" << std::endl;
    *this = other;
}

AssaultTerminator& AssaultTerminator::operator=(const AssaultTerminator* other){
    (void)other;
    return *this;
}

ISpaceMarine*     AssaultTerminator::clone(void) const
{
    AssaultTerminator* ret = new AssaultTerminator(*this);
    return ret;
}

void    AssaultTerminator::battleCry(void) const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void   AssaultTerminator::rangedAttack(void) const
{
	std::cout << " does nothing " << std::endl;
}

void   AssaultTerminator::meleeAttack(void) const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}