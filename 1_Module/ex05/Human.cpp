/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: Wester <Wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 09:44:51 by Wester        #+#    #+#                 */
/*   Updated: 2020/07/29 11:16:21 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(){};
Human::~Human(){};

Brain           Human::getBrain()
{
    return this->grey_matter;
}

std::string     Human::identify(void)
{
   return this->grey_matter.identify(); 
}