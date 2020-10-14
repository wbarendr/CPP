/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wester <wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/24 13:42:03 by wester        #+#    #+#                 */
/*   Updated: 2020/10/14 12:38:54 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int         main(void){
	std::list<int>				lst1;
	std::list<int>::iterator 	found_list;
	int num = 10;
	try {
		easyfind(lst1, num);
		std::cout << "found " << *found_list << " in lst1 on: " << *found_list << std::endl;

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
		std::cout << "found " << *found_list << " in lst1 on: " << *found_list << std::endl;
	}
	catch (const std::exception& e){
		std::cout << "could not find "  << num << std::endl;
	}


	std::vector<int>			v1;
	std::deque<int> 			deque1;

	std::vector<int>::iterator	found1;
	std::deque<int>::iterator 	found2;
	for (int i = 0; i <= 100; ++i){
		v1.push_back(i);
		deque1.push_back(i * 2);
	}
	try{
		found1 = easyfind(v1, 98);
		found2 = easyfind(deque1, 200);
		std::cout << "found " << *found1 << " in v1 and " << *found2 << " in deque1" << std::endl;
		
	}
	catch (const std::exception& e){
		std::cout << "could not find 100 in v1 or 200 in deque1" << std::endl;
	}
	return 0;
}
