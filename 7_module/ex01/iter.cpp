/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wester <wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 14:27:51 by wester        #+#    #+#                 */
/*   Updated: 2020/09/21 14:51:19 by wester        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template<typename T>
void    print(T A){
	std::cout << A << std::endl;
}



template<typename T>
void    iter(T* arr, int length, void func(T A)){
	for (int i = 0; i < length; ++i)
		func(arr[i]);
}

int		main(void){
	int arr1[] = {1, 2, 3, 4, 5};
	iter(arr1, 5, print);
	std::string str[] = {"hello", "this", "is", "..."};
	iter(str, 4, print);
}
