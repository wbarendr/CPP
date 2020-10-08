/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/02 15:12:47 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/10/08 17:20:49 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CHARACTER_HPP_
# define _CHARACTER_HPP_

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter 
{
	std::string		_name;
	AMateria* 		_materia[4];
	int				num;
	Character();
	
  public:
	Character(std::string const& name);
	Character(const Character& other);
	Character& operator=(const Character& other);
	virtual ~Character();
	
	virtual std::string const&  	getName() const;
	virtual void 					equip(AMateria* m);
	virtual void 					unequip(int idx);
	virtual void 					use(int idx, ICharacter& target);
	void							delete_mat();
};

#endif
