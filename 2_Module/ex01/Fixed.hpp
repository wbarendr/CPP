/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 19:50:32 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/10/02 16:01:02 by wbarendr      ########   odam.nl         */
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
	Fixed(const int num);
	Fixed(const float num);
	Fixed(const Fixed &object);
	Fixed&				operator= (const Fixed &overload);
	~Fixed();

	int					getRawBits(void) const;
	void				setRawBits(int const raw);
	
	int		toInt(void)const;
	float	toFloat(void) const;
};

std::ostream&       operator<<(std::ostream& stream, const Fixed& other);


#endif
