/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wester <wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 18:12:35 by wester        #+#    #+#                 */
/*   Updated: 2020/09/24 10:36:58 by wester        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int         main(void)
{
    Array<int>	arr(9);

	for (int i = 0; i < 3; ++i)
		std::cout << arr[i] << std::endl;

	std::cout << std::endl;
	for (int i = 0; i < 9; ++i)
	{
        arr[i] = 21 * (i % 3);
		std::cout << arr[i] << std::endl;
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
    }
    catch (const std::out_of_range& e){
        std::cout << "out of range" << std::endl;
    }
    std::cout << std::endl << str[0] << str[1] << str[2] << str[3] << std::endl;
	std::cout << "size: " << str.getSize() << std::endl << std::endl;

    system("leaks Array | grep bytes");
    return 0;
}
