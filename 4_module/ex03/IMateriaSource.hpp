/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   IMateriaSource.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 13:26:46 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/09/04 15:20:43 by Wester        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _IMATERIASOURCE_HPP_
# define _IMATERIASOURCE_HPP_

# include <iostream>
# include <string>

class IMateriaSource
{
  public:
	virtual ~IMateriaSource() {};
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif