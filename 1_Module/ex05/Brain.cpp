/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: Wester <Wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 20:54:35 by Wester        #+#    #+#                 */
/*   Updated: 2020/09/25 14:06:32 by wester        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::stringstream buff;

    this->neurons = 200820;
    this->pathways = 5;
    buff << this;
    this->address = buff.str();
}

Brain::~Brain(){}

std::string     Brain::identify(void)
{
    return this->address; 
}
