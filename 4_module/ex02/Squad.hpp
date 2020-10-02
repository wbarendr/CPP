/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/01 12:53:46 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/10/02 11:43:03 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SQUAD_HPP_
# define _SQUAD_HPP_

# include "ISpaceMarine.hpp"
# include "ISquad.hpp"

class Squad : public ISquad
{
	typedef struct          s_container
	{
		ISpaceMarine        *unit;
		struct s_container	*next;
	}                       t_container;
	
	int                 	_count;
	t_container*      		_soldiers;
	
	void				destroyUnits();
	void				deepCopy(const Squad& other);
	
  public:
	Squad();
	Squad(const Squad& other);
	Squad& operator=(const Squad& other);
	virtual ~Squad();
	int                 push(ISpaceMarine* soldier);
	int                 getCount() const;
	ISpaceMarine*       getUnit(int num) const;
};

#endif
