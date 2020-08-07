/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: Wester <Wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 17:32:32 by Wester        #+#    #+#                 */
/*   Updated: 2020/08/06 14:29:35 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SORCERER_HPP_
# define _SORCERER_HPP_

# include <iostream>
# include <string>
# include "Victim.hpp"

class Sorcerer {
  protected:
    std::string name;
    std::string title;
  public:
    ~Sorcerer();
    Sorcerer(std::string _name, std::string _title);
    Sorcerer(const Sorcerer& other);
    Sorcerer& operator=(const Sorcerer& other);
    void  polymorph(Victim const & _vic)const;
    std::string   getName()const ;
    std::string   getTitle()const ;
};

#endif