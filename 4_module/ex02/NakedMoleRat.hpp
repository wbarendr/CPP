/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NakedMoleRat.hpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: Wester <Wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/04 14:07:18 by Wester        #+#    #+#                 */
/*   Updated: 2020/09/28 12:29:40 by wbarendr      ########   odam.nl         */
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
    ~NakedMoleRat();
    NakedMoleRat* clone() const;
    void battleCry() const;
    void rangedAttack() const;
    void meleeAttack() const;
};

#endif
