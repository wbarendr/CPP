/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 12:26:49 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/08/07 12:46:23 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SUPERMUTANT_HPP_
# define _SUPERMUTANT_HPP_

# include <iostream>
# include <string>
# include "Enemy.hpp"

class SuperMutant : public virtual Enemy{
  public:
	SuperMutant(std::string const& type, int hp);
	~SuperMutant();
	SuperMutant(const SuperMutant& other);
	SuperMutant& 	operator=(const SuperMutant& other);
    void            takeDamage(int damage);
};

#endif