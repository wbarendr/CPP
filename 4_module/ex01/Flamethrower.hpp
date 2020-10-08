/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   flamethrower.hpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/08 15:40:56 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/10/08 15:41:31 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FLAMETHROWER_
# define _FLAMETHROWER_

# include "AWeapon.hpp"

class Flamethrower : public AWeapon{
  public:
	Flamethrower();
	Flamethrower(const Flamethrower& other);
	Flamethrower& 		operator=(const Flamethrower& other);
	virtual ~Flamethrower() {};
	virtual void 	attack() const;
};

#endif
