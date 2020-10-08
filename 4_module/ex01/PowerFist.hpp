/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 12:05:42 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/10/08 15:23:21 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _POWERFIST_HPP_
# define _POWERFIST_HPP_

# include "AWeapon.hpp"

class PowerFist : public AWeapon{
  public:
	PowerFist();
	PowerFist(const PowerFist& other);
	PowerFist& 		operator=(const PowerFist& other);
	virtual ~PowerFist() {};
	virtual void 	attack() const;
};

#endif
