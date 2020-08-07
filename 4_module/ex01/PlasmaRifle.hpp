/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 10:55:20 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/08/07 15:01:59 by Wester        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PLASMARIFLE_HPP_
# define _PLASMARIFLE_HPP_

# include <iostream>
# include <string>
# include "AWeapon.hpp"

class PlasmaRifle : public virtual AWeapon{
  public:
	PlasmaRifle();
	~PlasmaRifle();
	PlasmaRifle(const PlasmaRifle& other);
	PlasmaRifle& 	operator=(const PlasmaRifle& other);
	void 			attack() const;
};

#endif