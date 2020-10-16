/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wester <wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/24 22:50:01 by wester        #+#    #+#                 */
/*   Updated: 2020/10/16 11:33:18 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"


Span::Span(unsigned int N){
	_N = N;
	amount_now = 0;
}

Span::Span(const Span& other){
	*this = other;
}

Span&           Span::operator=(const Span& other){
	_N = other._N;
	amount_now = other.amount_now;
	for (unsigned int i = 0; i < amount_now; ++i){
		_arr.push_back(other._arr[i]);
	}
	return *this;
}

Span::~Span(){}

void			Span::addNumber(int num){
	if (amount_now >= _N)
		throw std::exception();
	_arr.push_back(num);
	amount_now++;
}

unsigned int	Span::shortestSpan(){
	if (amount_now < 2)
		throw std::exception();
	long shortest = 4294967295;
	unsigned int span;
	std::vector<int> tmp(_arr.size());
	std::copy(_arr.begin(), _arr.end(), tmp.begin());
	std::sort(tmp.begin(), tmp.end());
	for (unsigned int i = 1; i < amount_now; ++i){
		span = static_cast<long>(tmp[i]) - static_cast<long>(tmp[i - 1]);
		if (span < shortest)
			shortest = span;
	}
	return shortest;
}

unsigned int	Span::longestSpan(){
	if (amount_now < 2)
		throw std::exception();
	int bigspan = *std::max_element(_arr.begin(), _arr.end()) -	*std::min_element(_arr.begin(), _arr.end());
	if (!bigspan)
		throw std::exception();
	return bigspan;
}
