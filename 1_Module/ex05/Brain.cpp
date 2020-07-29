/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: Wester <Wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 20:54:35 by Wester        #+#    #+#                 */
/*   Updated: 2020/07/29 11:16:33 by wbarendr      ########   odam.nl         */
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
};

Brain::~Brain(){};

std::string     Brain::identify(void)
{
    return this->address; 
}