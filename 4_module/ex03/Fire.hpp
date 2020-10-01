/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fire.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Wester <Wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/04 14:43:10 by Wester        #+#    #+#                 */
/*   Updated: 2020/10/01 14:15:56 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIRE_HPP_
# define _FIRE_HPP_

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Fire : public AMateria
{
  public:
	Fire();
	Fire(const Fire& other);
	Fire& 				operator=(const Fire& other);
	virtual ~Fire();
	AMateria*	 		clone() const;
	void      			use(ICharacter& target);
};

#endif
