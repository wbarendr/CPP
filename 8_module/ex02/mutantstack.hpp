/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mutantstack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: wester <wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/25 10:02:48 by wester        #+#    #+#                 */
/*   Updated: 2020/10/14 14:37:17 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MUTANTSTACK_HPP_
# define _MUTANTSTACK_HPP_

# include <iostream>
# include <list>
# include <stack>
# include <iterator>

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
	
	typedef typename std::list<T>::iterator iterator;
	typedef typename std::list<T>::reverse_iterator reverse_iterator;
	
	iterator    			begin(void){
		return _list.begin();
	}
	iterator    			end(void){
		return _list.end();
	}
	
	reverse_iterator    			rbegin(void){
		return _list.rend();
	}
	reverse_iterator    			rend(void){
		return _list.rbegin();
	}
};

#endif
