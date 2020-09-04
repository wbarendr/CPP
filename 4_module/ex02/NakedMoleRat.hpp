/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   nakedMoleRat.hpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: Wester <Wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/04 14:07:18 by Wester        #+#    #+#                 */
/*   Updated: 2020/09/04 14:07:49 by Wester        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _NAKEDMOLERAT_HPP_
# define _NAKEDMOLERAT_HPP_

# include <iostream>
# include <string>
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