/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 19:50:30 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/08/01 11:38:11 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void){
    std::cout << "Default" << std::endl;
    this->fixed_point_value = 0;
};

Fixed::~Fixed(void){
    std::cout << "Destructor" << std::endl;
};

Fixed::Fixed(const Fixed &object){
    std::cout << "Copy constructor" << std::endl;
    *this = object;
};

Fixed&  Fixed::operator= (const Fixed &overload){
    std::cout << "Assignation operator overload" << std::endl;
    this->fixed_point_value = overload.getRawBits();
    return *this;
};

int     Fixed::getRawBits(void) const{
    return this->fixed_point_value;
};

void	Fixed::setRawBits(int const raw){
    std::cout << "Set with S Bits" << std::endl;
    this->fixed_point_value = raw;
};

Fixed::Fixed(const int num){
	std::cout << "Int constructor called" << std::endl;
	this->fixed_point_value = num << literal;
};

Fixed::Fixed(const float num){
	std::cout << "Float constructor called" << std::endl;
	this->fixed_point_value = num * (1 << literal);
};

float	Fixed::toFloat(void) const{
	return (float)this->fixed_point_value / (1 << literal);
}

int		Fixed::toInt(void) const{
	return this->fixed_point_value >> literal;
}
