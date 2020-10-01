/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/02 14:51:28 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/10/01 14:21:16 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ICE_HPP_
# define _ICE_HPP_

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Ice : public AMateria
{
  public:
	Ice();
	Ice(const Ice& other);
	Ice& 				operator=(const Ice& other);
	virtual ~Ice();
	AMateria* 		clone() const;
	void 			use(ICharacter& target);
};

#endif
