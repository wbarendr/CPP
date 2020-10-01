/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wester <wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/24 22:50:02 by wester        #+#    #+#                 */
/*   Updated: 2020/10/01 10:46:19 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SPAN_HPP_
# define _SPAN_HPP_

# include <iostream>

class Span
{
	int*			_arr;
	unsigned int 	_N;
	unsigned int	amount_now;
  public:
	Span();
	Span(unsigned int N);
	Span(const Span& other);
	Span&			operator=(const Span& other);
	~Span();
	void			addNumber2(int* arr);
	void        	addNumber(int num);
	unsigned int	shortestSpan();
	unsigned int	longestSpan();
};

#endif
