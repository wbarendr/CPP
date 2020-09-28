/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Embarrass.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 16:40:49 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/09/28 12:24:06 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _EMBARRASS_HPP_
# define _EMBARRASS_HPP_

# include "AWeapon.hpp"

class Embarrass : public virtual AWeapon{
  public:
	Embarrass();
	virtual ~Embarrass() {};
	Embarrass(const Embarrass& other);
	Embarrass& 	operator=(const Embarrass& other);
	void 			attack() const;
};

#endif
