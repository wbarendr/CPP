/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/06 13:43:22 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/10/02 11:41:48 by wbarendr      ########   odam.nl         */
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
    virtual ~Victim();
    Victim(std::string _name);
    Victim(const Victim& other);
    std::string     getName() const;
    Victim& operator=(const Victim& other);
    void  getPolymorphed()const;
};

std::ostream&   operator<<(std::ostream& stream, const Victim& other);

#endif
