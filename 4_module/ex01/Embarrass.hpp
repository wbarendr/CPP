/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Embarrass.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 16:40:49 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/10/08 15:23:05 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _EMBARRASS_HPP_
# define _EMBARRASS_HPP_

# include "AWeapon.hpp"

class Embarrass : public AWeapon{
  public:
	Embarrass();
	Embarrass(const Embarrass& other);
	Embarrass& 	operator=(const Embarrass& other);
	virtual ~Embarrass() {};
	
	virtual void 	attack() const;
};

#endif
