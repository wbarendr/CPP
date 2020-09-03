/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   peasant.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 16:13:03 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/09/03 16:13:47 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PEASANT_HPP_
# define _PEASANT_HPP_

# include "Victim.hpp"

class Peasant : public virtual Victim{
  public:
    ~Peasant();
    Peasant(std::string _name);
    Peasant(const Peasant& other);
    Peasant& operator=(const Peasant& other);
    
    void  getPolymorphed()const;
};

#endif