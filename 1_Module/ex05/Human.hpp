/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: Wester <Wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 21:44:07 by Wester        #+#    #+#                 */
/*   Updated: 2020/07/29 11:01:41 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMAN_HPP_
# define _HUMAN_HPP_

# include "Brain.hpp"

class Human {
	public:
		Brain						getBrain();
		std::string     identify();
		Human();
		~Human();
    Brain grey_matter;
};

#endif