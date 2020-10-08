/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 10:55:20 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/10/08 15:23:17 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PLASMARIFLE_HPP_
# define _PLASMARIFLE_HPP_

# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon{
  public:
	PlasmaRifle();
	PlasmaRifle(const PlasmaRifle& other);
	PlasmaRifle& 	operator=(const PlasmaRifle& other);
	virtual ~PlasmaRifle();
	virtual void 	attack() const;
};

#endif
