/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 19:50:30 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/07/29 21:04:29 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(const int num)
{
	this->fixed_point = num;
};

Fixed::Fixed(const float num)
{
	this->fixed_point = num;
};

float Fixed::toFloat(void) const
{
	return ((float)(this->fixed_point) / (1 << literal));
};


int         main(void)
{
	
}