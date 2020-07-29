/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: Wester <Wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 21:44:07 by Wester        #+#    #+#                 */
/*   Updated: 2020/07/29 09:44:39 by Wester        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMAN_HPP_
# define _HUMAN_HPP_

# include "Brain.hpp"

class Human {
  public:
    Brain     getBrain();
    std::string     identify(void);
    Human();
    ~Human();
};

#endif