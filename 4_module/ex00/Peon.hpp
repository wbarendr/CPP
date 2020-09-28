/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/06 14:13:23 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/09/28 12:11:51 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PEON_HPP_
# define _PEON_HPP_

# include "Victim.hpp"

class Peon : public virtual Victim{
  public:
    virtual ~Peon();
    Peon(std::string _name);
    Peon(const Peon& other);
    Peon& operator=(const Peon& other);
    
    void  getPolymorphed()const;
};

#endif
