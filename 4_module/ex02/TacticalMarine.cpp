/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   TacticalMarine.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/01 11:41:10 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/09/28 12:30:05 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(){
	std::cout <<  "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::~TacticalMarine(){
	std::cout <<  "Aaargh..." << std::endl;
}

TacticalMarine::TacticalMarine( const TacticalMarine& other){
	std::cout <<  "Tactical Marine ready for battle!" << std::endl;
    *this = other;
}

TacticalMarine& TacticalMarine::operator=(const TacticalMarine* other){
    (void)other;
    return *this;
}

TacticalMarine*     TacticalMarine::clone(void) const
{
    TacticalMarine* ret = new TacticalMarine(*this);
    return ret;
}

void   TacticalMarine::battleCry(void) const
{
	std::cout << "For the holy PLOT!" << std::endl;
}

void   TacticalMarine::rangedAttack(void) const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void   TacticalMarine::meleeAttack(void) const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}
