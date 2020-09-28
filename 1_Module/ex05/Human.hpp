/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: Wester <Wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 21:44:07 by Wester        #+#    #+#                 */
/*   Updated: 2020/09/25 14:06:05 by wester        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMAN_HPP_
# define _HUMAN_HPP_

# include "Brain.hpp"

class Human {
    Brain 			grey_matter;
  public:
	Human();
	~Human();
	Brain			getBrain();
	std::string     identify();
};

#endif
