/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 12:09:26 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/08/07 17:17:22 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ENEMY_HPP_
# define _ENEMY_HPP_

# include <iostream>
# include <string>
# include "AWeapon.hpp"

class Enemy
{
  private:
	int _hp;
	std::string _type;
  public:
	Enemy();
	Enemy(const Enemy& other);
	Enemy(int hp, std::string const& type);
	Enemy&	operator=(const Enemy& other);
	virtual ~Enemy();
	std::string 	getType() const;
	int 			getHP() const;
	void			setHP(int hp);
	void			setType(std::string type);
	virtual void 	takeDamage(int);
};

#endif