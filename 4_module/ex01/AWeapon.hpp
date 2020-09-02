/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 10:35:26 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/08/31 17:35:54 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _AWEAPON_HPP_
# define _AWEAPON_HPP_

# include <iostream>
# include <string>

class AWeapon
{
  private:
	std::string		_name;
	int				_damage;
	int				_ap;
	
  public:
	AWeapon();
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(const AWeapon& other);
	AWeapon& 	operator=(const AWeapon& other);
	virtual 	~AWeapon();
	std::string getName() const;
	int 		getAPCost() const;
	int 		getDamage() const;
	void		setName(std::string name);
	void		setAP(int apcost);
	void		setDamage(int damage);
	virtual void 		attack() const = 0;
};

#endif