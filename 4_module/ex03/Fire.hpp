/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fire.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Wester <Wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/04 14:43:10 by Wester        #+#    #+#                 */
/*   Updated: 2020/10/08 17:15:04 by wbarendr      ########   odam.nl         */
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
	virtual AMateria*	clone() const;
	virtual void      	use(ICharacter& target);
};

#endif
