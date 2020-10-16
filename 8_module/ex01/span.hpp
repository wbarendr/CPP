/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wester <wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/24 22:50:02 by wester        #+#    #+#                 */
/*   Updated: 2020/10/16 11:36:27 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SPAN_HPP_
# define _SPAN_HPP_

# include <iostream>
# include <stdexcept>
# include <algorithm>
# include <climits>
# include <vector>
# include <array>
# include <stdexcept>

class Span
{
	std::vector<int>			_arr;
	unsigned int 				_N;
	unsigned int				amount_now;
	Span();
  public:
	Span(unsigned int N);
	Span(const Span& other);
	Span&			operator=(const Span& other);
	~Span();

	void        	addNumber(int num);
	
	template <typename Iterator> 
	void			addNumber(Iterator begin, Iterator end)
	{
		for (; begin < end && amount_now < _N; ++begin){
			_arr.push_back(*begin);
			amount_now++;
		}
	};
	
	unsigned int	shortestSpan();
	unsigned int	longestSpan();
};

#endif
