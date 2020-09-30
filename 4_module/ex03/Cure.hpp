/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/02 14:23:46 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/09/28 12:33:51 by wbarendr      ########   odam.nl         */
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
	~Cure();
	AMateria*	 		clone() const;
	void      			use(ICharacter& target);
};

#endif
