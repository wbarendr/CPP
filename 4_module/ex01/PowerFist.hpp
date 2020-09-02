/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 12:05:42 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/08/31 17:37:06 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _POWERFIST_HPP_
# define _POWERFIST_HPP_

# include <iostream>
# include <string>
# include "AWeapon.hpp"

class PowerFist : public virtual AWeapon{
  public:
	PowerFist();
	virtual ~PowerFist();
	PowerFist(const PowerFist& other);
	PowerFist& 	operator=(const PowerFist& other);
	void 			attack() const;
};

#endif