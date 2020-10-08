/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/06 14:13:23 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/10/08 15:25:59 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PEON_HPP_
# define _PEON_HPP_

# include "Victim.hpp"

class Peon : public Victim{
    Peon();
  public:
    Peon(std::string _name);
    Peon(const Peon& other);
    Peon& operator=(const Peon& other);
    virtual ~Peon();
    
    void  getPolymorphed()const;
};

#endif
