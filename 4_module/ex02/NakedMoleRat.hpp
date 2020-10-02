/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NakedMoleRat.hpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: Wester <Wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/04 14:07:18 by Wester        #+#    #+#                 */
/*   Updated: 2020/10/02 11:42:55 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _NAKEDMOLERAT_HPP_
# define _NAKEDMOLERAT_HPP_

# include "ISpaceMarine.hpp"

class NakedMoleRat : public ISpaceMarine
{
  public:
    NakedMoleRat();
    NakedMoleRat( const NakedMoleRat& other);
    NakedMoleRat& operator=(const NakedMoleRat* other);
    virtual ~NakedMoleRat();
    NakedMoleRat* clone() const;
    void battleCry() const;
    void rangedAttack() const;
    void meleeAttack() const;
};

#endif
