/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   pony.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 13:00:44 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/07/28 13:58:18 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PONY_HPP_
# define _PONY_HPP_

# include <iostream>
# include <string.h>

class Pony {
  public: 
    std::string head; 
    std::string legs;
    std::string ears;

    
    Pony(std::string head, std::string legs, std::string ears);
    ~Pony(void);
};

#endif