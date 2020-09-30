/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/02 15:12:47 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/09/28 12:33:04 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CHARACTER_HPP_
# define _CHARACTER_HPP_

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter 
{
	std::string		_name;
	AMateria* 		_materia[5];
	int				num;
	Character();
	
  public:
	Character(std::string const& name);
	Character(const Character& other);
	Character& operator=(const Character& other);
	~Character();
	
	std::string const&          getName() const;
	void 						equip(AMateria* m);
	void 						unequip(int idx);
	void 						use(int idx, ICharacter& target);
	void						delete_mat();
};

#endif
