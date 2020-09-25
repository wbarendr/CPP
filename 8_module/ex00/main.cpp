/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wester <wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/24 13:42:03 by wester        #+#    #+#                 */
/*   Updated: 2020/09/24 22:03:27 by wester        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int         main(void){
	std::list<int>				lst1;
	std::list<int>::iterator 	found_list;
	int num = 10;
	try {
		easyfind(lst1, num);
	}
	catch (const std::exception& e){
		std::cout << "could not find "  << num << " in lst1" << std::endl;
	}
	lst1.push_back(num - 1);
	lst1.push_back(num + 1);
	lst1.push_back(num - 1);
	lst1.push_back(num);
	lst1.push_back(num - 1);
	try {
		found_list = easyfind(lst1, num);
		std::cout << "found " << num << " in lst1" << std::endl;
	}
	catch (const std::exception& e){
		std::cout << "could not find "  << num << std::endl;
	}

	std::cout << std::endl;

	std::deque<int> 			deque1;
	std::vector<int>			v1;
	for (int i = 0; i < 101; ++i){
		v1.push_back(i);
		deque1.push_back(i * 2);
	}
	try{
		easyfind(v1, 100);
		easyfind(deque1, 200);
		std::cout << "found 100 in v1 and 200 in deque1" << std::endl;
		
	}
	catch (const std::exception& e){
		std::cout << "could not find 100 in v1 or 200 in deque1" << std::endl;
	}
	return 0;
}
