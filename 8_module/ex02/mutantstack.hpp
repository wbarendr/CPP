/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mutantstack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: wester <wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/25 10:02:48 by wester        #+#    #+#                 */
/*   Updated: 2020/10/15 14:13:15 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MUTANTSTACK_HPP_
# define _MUTANTSTACK_HPP_

# include <iostream>
# include <list>
# include <stack>
// # include <iterator>
// # include <deque>
# include <vector>

template<typename T>
class MutantStack : public std::stack<T>
{
	std::vector<T>        _list;
  public:
	MutantStack(){};
	MutantStack(const MutantStack& other){
		*this = other;
	};
	MutantStack&            operator=(const MutantStack& other){
		_list = other._list;
		return *this;
	};
	~MutantStack(){};
	
	typedef typename std::vector<T>::iterator iterator;
	typedef typename std::vector<T>::reverse_iterator reverse_iterator;
	
	void		push(T x){
		_list.push_back(x);
	}
	
	void		pop(){
		_list.pop_back();
	}
	
	iterator    			begin(){
		return _list.begin();
	}
	iterator    			end(){
		return _list.end();
	}
	
	T						top(){
		return *(_list.end() - 1);
	}

	int						size(){
		return _list.size();
	}
	reverse_iterator    			rbegin(void){
		return _list.rend();
	}
	reverse_iterator    			rend(void){
		return _list.rbegin();
	}
};

#endif
