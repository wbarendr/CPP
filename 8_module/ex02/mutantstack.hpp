/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mutantstack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: wester <wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/25 10:02:48 by wester        #+#    #+#                 */
/*   Updated: 2020/10/01 10:41:24 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MUTANTSTACK_HPP_
# define _MUTANTSTACK_HPP_

# include <iostream>
# include <list>
# include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
	std::list<T>        _list;
  public:
	MutantStack(){};
	MutantStack(const MutantStack& other){
		*this = other;
	};
	MutantStack&            operator=(const MutantStack& other){
		_list = other._list;
	};
	~MutantStack(){};
	
	// void    				push(T data){
	// 	_list.push_front(data);
	// }
	
	// void    				pop(void){
	// 	_list.pop_front();
	// }
	
	// T           			size(void){
	// 	return _list.size();
	// }
	
	// T						top(){
	// 	return _list.front();
	// }
	
	typedef std::list<int>::iterator iterator;
	
	iterator    			begin(void){
		return _list.begin();
	}

	iterator    			end(void){
		return _list.end();
	}
};

#endif
