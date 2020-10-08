/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Warden.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/08 15:50:59 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/10/08 15:51:18 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WARDEN_HPP_
# define _WARDEN_HPP_

# include "Enemy.hpp"

class Warden : public Enemy{
  public:
	Warden();
	Warden(const Warden& other);
	Warden& 	operator=(const Warden& other);
	virtual ~Warden();
    virtual void    takeDamage(int damage);
};

#endif
