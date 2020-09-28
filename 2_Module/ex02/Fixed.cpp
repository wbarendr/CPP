/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 19:50:30 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/09/26 12:32:05 by wester        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void){
    std::cout << "Default" << std::endl;
    this->fixed_point_value = 0;
}

Fixed::~Fixed(void){
    std::cout << "Destructor" << std::endl;
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

bool  Fixed::operator>(const Fixed &overload){
    return this->getRawbits() > overload->getRawBits();
}

bool  Fixed::operator<(const Fixed &overload){
    return this->getRawbits() < overload->getRawBits();
}

bool  Fixed::operator>=(const Fixed &overload){
    return this->getRawbits() >= overload->getRawBits();
}

bool  Fixed::operator<=(const Fixed &overload){
    return this->getRawbits() <= overload->getRawBits();
}

bool  Fixed::operator==(const Fixed &overload){
    return this->getRawbits() == overload->getRawBits();
}

bool  Fixed::operator!=(const Fixed &overload){
    return this->getRawbits() != overload->getRawBits();
}

Fixed&  Fixed::operator+(const Fixed &overload){
    return this->toFloat() + overload->toFloat();
}

Fixed&  Fixed::operator-(const Fixed &overload){
    return this->toFloat() - overload->toFloat();
}

Fixed&  Fixed::operator/(const Fixed &overload){
    return this->toFloat() / overload->toFloat();
}

Fixed&  Fixed::operator*(const Fixed &overload){
    return this->toFloat() * overload->toFloat();
}

Fixed&	Fixed::operator++(void)
{
	++fixed_point_value;
	return *this;
}

Fixed&	Fixed::operator--(void)
{
	--fixed_point_value;
	return *this;
}

int     Fixed::getRawBits(void) const{
    return this->fixed_point_value;
}

void	Fixed::setRawBits(int const raw){
    std::cout << "Set with S Bits" << std::endl;
    this->fixed_point_value = raw;
}

Fixed::Fixed(const int num){
	std::cout << "Int constructor called" << std::endl;
	this->fixed_point_value = num << literal;
}

Fixed::Fixed(const float num){
	std::cout << "Float constructor called" << std::endl;
	this->fixed_point_value = num * (1 << literal);
}

float	Fixed::toFloat(void) const{
	return (float)this->fixed_point_value / (1 << literal);
}

int		Fixed::toInt(void) const{
	return this->fixed_point_value >> literal;
}

std::ostream& Fixed::operator<<(std::ostream& stream, const Fixed& other)
{
	stream << other.toFloat();
	return stream;
}

const Fixed&	Fixed::max(const Fixed &f1, const Fixed &f2)
{
	return (f1 > f2) ? f1 : f2;
}

Fixed&	Fixed::max(Fixed &f1, Fixed &f2)
{
	return (f1 > f2) ? f1 : f2;
}