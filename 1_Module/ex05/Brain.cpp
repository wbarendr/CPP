/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: Wester <Wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 20:54:35 by Wester        #+#    #+#                 */
/*   Updated: 2020/07/28 21:38:14 by Wester        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){};
Brain::~Brain(){};

std::string     Brain::identify(void)
{
    std::stringstream buff;

    this->neurons = 200820;
    this->pathways = 5;
    buff << this;
    return buff.str(); 
}