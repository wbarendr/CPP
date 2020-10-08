/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 12:26:49 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/10/08 15:28:08 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SUPERMUTANT_HPP_
# define _SUPERMUTANT_HPP_

# include "Enemy.hpp"

class SuperMutant : public Enemy{
  public:
	SuperMutant();
	SuperMutant(const SuperMutant& other);
	SuperMutant& 	operator=(const SuperMutant& other);
	virtual ~SuperMutant();
    virtual void    takeDamage(int damage);
};

#endif
