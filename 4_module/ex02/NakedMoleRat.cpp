/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   nakedMoleRat.cpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: Wester <Wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/04 14:08:07 by Wester        #+#    #+#                 */
/*   Updated: 2020/09/04 14:13:12 by Wester        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "NakedMoleRat.hpp"

NakedMoleRat::NakedMoleRat(){
	std::cout <<  "Mole Rat getting naked" << std::endl;
}

NakedMoleRat::~NakedMoleRat(){
	std::cout <<  "nooooo, I don\'t want to wear clothes" << std::endl;
}

NakedMoleRat::NakedMoleRat( const NakedMoleRat& other){
	std::cout <<  "Mole Rat getting naked" << std::endl;
    *this = other;
}

NakedMoleRat& NakedMoleRat::operator=(const NakedMoleRat* other){
    (void)other;
    return *this;
}

NakedMoleRat*     NakedMoleRat::clone(void) const
{
    NakedMoleRat* ret = new NakedMoleRat(*this);
    return ret;
}

void   NakedMoleRat::battleCry(void) const
{
	std::cout << "For the Nudity!!" << std::endl;
}

void   NakedMoleRat::rangedAttack(void) const
{
	std::cout << "* attacks by flashing enemy *" << std::endl;
}

void   NakedMoleRat::meleeAttack(void) const
{
	std::cout << "* harrasses everyone! *" << std::endl;
}