/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/06 13:43:22 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/10/08 15:17:24 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _VICTIM_HPP_
# define _VICTIM_HPP_

# include <iostream>
# include <string>

class Victim {
  protected:
    std::string name;
  public:
    Victim();
    Victim(std::string _name);
    Victim(const Victim& other);
    Victim& operator=(const Victim& other);
    virtual ~Victim();
    
    std::string     getName() const;
    virtual void  getPolymorphed()const;
};

std::ostream&   operator<<(std::ostream& stream, const Victim& other);

#endif
