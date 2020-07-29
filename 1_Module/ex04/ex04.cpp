/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex04.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Wester <Wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 20:20:31 by Wester        #+#    #+#                 */
/*   Updated: 2020/07/28 20:32:51 by Wester        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int     main(void)
{
    std::string     str = "HI THIS IS BRAIN";
    std::string     *pointer = &str;
    std::string     &reference = str;

    std::cout << "Typing the string:   " << str << std::endl;
    std::cout << "Typing what's at the pointer:   " << *pointer << std::endl;
    std::cout << "Typing what's at the reference:   " << reference << std::endl;
    return 0;
}