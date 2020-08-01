/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 19:50:32 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/08/01 10:47:48 by wbarendr      ########   odam.nl         */
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
	Fixed&				operator= (const Fixed &overload);
	int					getRawBits(void) const;
	void				setRawBits(int const raw);

	Fixed(const int num);
	Fixed(const float num);
	float	toFloat(void) const;
	int		toInt(void)const;
	
};

#endif