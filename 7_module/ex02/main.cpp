/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wester <wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 18:12:35 by wester        #+#    #+#                 */
/*   Updated: 2020/10/12 18:03:59 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int         main(void)
{
    Array<int>	arr(3);

    int * a = new int();

    std::cout << *a << std::endl;

	std::cout << std::endl << std::endl << "here " << arr.getSize() << std::endl;
    try {
	    for (unsigned int i = 0; i < arr.getSize(); ++i)
		    std::cout << "1. " << i << " | " << arr[i] << std::endl;
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
	std::cout << std::endl << std::endl;
	for (unsigned int i = 0; i < arr.getSize(); ++i)
	{
        arr[i] = 21 * (i % 3);
		std::cout << "2. " << arr[i] << std::endl;
	}
	std::cout << "size: " << arr.getSize() << std::endl << std::endl;

    Array<float>    floats(7);
    for (int i = 0; i < 7; ++i){
        floats[i] = 1.0 / (i + 2);
	    std::cout << floats[i] << std::endl;
    }
	std::cout << "size: " << floats.getSize() << std::endl << std::endl;

    
    Array<std::string> str(4);
    str[0] = "Hello";
    str[1] = " how";
    str[2] = " are";
    str[3] = " you?";
    try {
        str[4]= "kan niet";
        str[-3]= "kan niet";
    }
    catch (const std::out_of_range& e){
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl << str[0] << str[1] << str[2] << str[3] << std::endl;
	std::cout << "size: " << str.getSize() << std::endl << std::endl;

    system("leaks Array | grep bytes");
    return 0;
}
