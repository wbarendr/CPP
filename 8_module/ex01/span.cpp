/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wester <wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/24 22:50:01 by wester        #+#    #+#                 */
/*   Updated: 2020/09/24 23:28:46 by wester        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(){
	_N = 0;
	amount_now = 0;
}

Span::Span(unsigned int N){
	_N = N;
	amount_now = 0;
	_arr = new int[N];
}

Span::Span(const Span& other){
	*this = other;
}

Span&           Span::operator=(const Span& other){
	_N = other._N;
	amount_now = other.amount_now;
	_arr = new int[_N];
	for (unsigned int i = 0; i < amount_now; ++i){
		_arr[i] = other._arr[i];
	}
	return *this;
}

Span::~Span(){}

void			Span::addNumber(int num){
	if (amount_now >= _N)
		throw std::exception();
	_arr[amount_now] = num;
	amount_now++;
}

unsigned int	Span::shortestSpan(){
	if (amount_now < 2)
		throw std::exception();
	int shortest = 2147483647;
	int tmp;
	for (unsigned int i = 1; i < amount_now; ++i){
		tmp = abs(_arr[i - 1] - _arr[i]); 
		if (tmp < shortest)
			shortest = tmp;
	}
	return shortest;
}

unsigned int	Span::longestSpan(){
	if (amount_now < 2)
		throw std::exception();
	int low = 2147483647;
	int high = 0;
	for (unsigned int i = 0; i < amount_now; ++i){
		if (_arr[i] <= low)
			low = _arr[i];
		if (_arr[i] >= high)
			high = _arr[i];
	}
	return high - low;
}
