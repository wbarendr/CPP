/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/02 14:23:46 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/10/08 17:14:49 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CURE_HPP_
# define _CURE_HPP_

# include <string>
# include <iostream>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Cure : public AMateria
{
  public:
	Cure();
	Cure(const Cure& other);
	Cure& 				operator=(const Cure& other);
	virtual ~Cure();
	virtual AMateria*	clone() const;
	virtual void      	use(ICharacter& target);
};

#endif
