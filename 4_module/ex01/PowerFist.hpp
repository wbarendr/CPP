/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 12:05:42 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/08/07 13:06:41 by wbarendr      ########   odam.nl         */
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
	PowerFist(std::string const& name, int apcost, int damage);
	~PowerFist();
	PowerFist(const PowerFist& other);
	PowerFist& 	operator=(const PowerFist& other);
	void 			attack() const;
};

#endif