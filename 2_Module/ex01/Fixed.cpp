/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                          k                           +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 19:50:30 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/10/02 16:01:41 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void){
    std::cout << "Default" << std::endl;
    this->fixed_point_value = 0;
}

Fixed::Fixed(const int num){
	std::cout << "Int constructor called" << std::endl;
	this->fixed_point_value = num << literal;
}

Fixed::Fixed(const float num){
	std::cout << "Float constructor called" << std::endl;
	this->fixed_point_value = roundf(num * (1 << literal));
}

Fixed::Fixed(const Fixed &object){
    std::cout << "Copy constructor" << std::endl;
    *this = object;
}

Fixed&  Fixed::operator= (const Fixed &overload){
    std::cout << "Assignation operator overload" << std::endl;
    this->fixed_point_value = overload.getRawBits();
    return *this;
}

Fixed::~Fixed(void){
    std::cout << "Destructor" << std::endl;
}

int     Fixed::getRawBits(void) const{
    return this->fixed_point_value;
}

void	Fixed::setRawBits(int const raw){
    std::cout << "Set with S Bits" << std::endl;
    this->fixed_point_value = raw;
}


float	Fixed::toFloat(void) const{
	return (float)this->fixed_point_value / (1 << literal);
}

int		Fixed::toInt(void) const{
	return this->fixed_point_value >> literal;
}

std::ostream&       operator<<(std::ostream& stream, const Fixed& other)
{
	stream << other.toFloat();
	return stream;
}
