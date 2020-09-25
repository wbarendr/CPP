/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: wester <wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/24 13:20:03 by wester        #+#    #+#                 */
/*   Updated: 2020/09/24 22:01:45 by wester        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _EASYFIND_HPP_
# define _EASYFIND_HPP_

# include <exception>
# include <algorithm>
# include <iostream>
# include <map>
# include <vector>
# include <list>
# include <deque>

template<typename T>
typename T::iterator            easyfind(T& container, int num)
{

    typename T::iterator     tmp;
    
    tmp = std::find(container.begin(), container.end(), num);
    if (tmp == container.end() && *tmp != num){
        throw std::exception();
    }
    return tmp;
}

#endif
