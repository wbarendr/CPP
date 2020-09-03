/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/02 13:51:48 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/09/03 14:09:14 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _AMATERIA_HPP_
# define _AMATERIA_HPP_

# include <string>
# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
  protected:	
    std::string 	  	_type;
	unsigned int 		_xp;
	AMateria();
  public:
	AMateria(std::string const & type);
	AMateria(const AMateria& other);
	AMateria& 				operator=(const AMateria& other);
	virtual ~AMateria();
	std::string const& 		getType() const; //Returns the materia type
	unsigned int 			getXP() const; //Returns the Materia's XP
	virtual AMateria* 		clone() const = 0;
	virtual void 			use(ICharacter& target);
};

#endif