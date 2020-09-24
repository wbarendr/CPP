/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: wester <wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 15:12:17 by wester        #+#    #+#                 */
/*   Updated: 2020/09/24 10:03:49 by wester        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ARRAY_HPP_
# define _ARRAY_HPP_

# include <iostream>
# include <stdexcept>
# include <iostream>
# include <iomanip>
# include <stdlib.h>


template <class T>
class Array
{
	private:
		T								*_arr;
		unsigned int		_size;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array& other);
		Array&					operator=(const Array& other);
		~Array();
		unsigned int		getSize() const;
		T&								operator[](int n);
		
};

# include "Array.ipp"

#endif
