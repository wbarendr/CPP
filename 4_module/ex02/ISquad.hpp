/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ISquad.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/08 15:31:19 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/09/02 12:07:10 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ISQUAD_HPP_
# define _ISQUAD_HPP_

# include "ISpaceMarine.hpp"

class ISquad
{
  public:
	virtual ~ISquad() {}
	virtual int 			getCount() const = 0;
	virtual int 			push(ISpaceMarine* x) = 0;
	virtual ISpaceMarine* 	getUnit(int n) const = 0;
};

#endif