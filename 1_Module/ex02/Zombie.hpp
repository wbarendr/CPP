/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: Wester <Wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 16:29:34 by Wester        #+#    #+#                 */
/*   Updated: 2020/09/25 11:48:14 by wester        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_HPP_
# define _ZOMBIE_HPP_

# include <iostream>
# include <string.h>

class Zombie 
{
		std::string _type;
		std::string _name;
		
	public:
		Zombie(void);
		~Zombie(void);
		void 						announce(void);
		void						change_name(std::string new_name);
		void						change_type(std::string new_type);
};

#endif
