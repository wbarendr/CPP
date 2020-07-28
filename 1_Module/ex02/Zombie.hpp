/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: Wester <Wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 16:29:34 by Wester        #+#    #+#                 */
/*   Updated: 2020/07/28 16:38:35 by Wester        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_HPP_
# define _ZOMBIE_HPP_

# include <iostream>
# include <string.h>

class Zombie {
  public:
    std::string type;
    std::string name;
    void announce(){
        std::cout << "<" << name << " (" << type << ")> Braiiiiiiiiiinnnnnssss..." << std::endl;
    }
    
  Zombie(void);
  ~Zombie(void);
};

#endif