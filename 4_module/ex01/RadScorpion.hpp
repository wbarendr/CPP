/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 12:43:35 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/10/08 15:23:38 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _RADSCORPION_HPP_
# define _RADSCORPION_HPP_

# include "Enemy.hpp"

class RadScorpion : public Enemy{
  public:
  	RadScorpion();
	RadScorpion(const RadScorpion& other);
	RadScorpion& 	operator=(const RadScorpion& other);
	virtual ~RadScorpion();
};

#endif
