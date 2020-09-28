/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 19:50:32 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/09/26 12:32:20 by wester        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_HPP_
# define _FIXED_HPP_

# include <iostream>
# include <string>

class Fixed {

	int					fixed_point_value;
	static const int	literal = 8;

  public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &object);
	Fixed&				operator=(const Fixed &overload);
	bool				operator>(const Fixed &overload);
	bool				operator<(const Fixed &overload);
	bool				operator>=(const Fixed &overload);
	bool				operator<=(const Fixed &overload);
	bool				operator==(const Fixed &overload);
	bool				operator!=(const Fixed &overload);
	Fixed&				operator+(const Fixed &overload);
	Fixed&				operator-(const Fixed &overload);
	Fixed&				operator*(const Fixed &overload);
	Fixed&				operator/(const Fixed &overload);
	Fixed&				operator++();
	Fixed&				operator--();
	static const Fixed&	max(const Fixed &f1, const Fixed &f2);
	static Fixed&		max(Fixed &f1, Fixed &f2);
	int					getRawBits(void) const;
	void				setRawBits(int const raw);

	Fixed(const int num);
	Fixed(const float num);
	float	toFloat(void) const;
	int		toInt(void)const;
	
};

#endif
