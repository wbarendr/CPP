/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: Wester <Wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 09:44:51 by Wester        #+#    #+#                 */
/*   Updated: 2020/09/25 14:06:22 by wester        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(){}
Human::~Human(){}

Brain           Human::getBrain()
{
    return this->grey_matter;
}

std::string     Human::identify(void)
{
   return this->grey_matter.identify(); 
}
