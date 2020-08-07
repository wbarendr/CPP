/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/06 14:13:23 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/08/06 14:40:17 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _Peon_HPP_
# define _Peon_HPP_

# include <iostream>
# include <string>
# include "Victim.hpp"

class Peon : public virtual Victim{
  public:
    ~Peon();
    Peon(std::string _name);
    Peon(const Peon& other);
    Peon& operator=(const Peon& other);
    
    void  getPolymorphed()const;
};

#endif