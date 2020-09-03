/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ICharacter.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/02 14:57:55 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/09/03 13:48:47 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ICHARACTER_HPP_
# define _ICHARACTER_HPP_

// # include "AMateria.hpp"

class AMateria;

class ICharacter
{
  public:
	virtual ~ICharacter() {};
	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};

#endif
