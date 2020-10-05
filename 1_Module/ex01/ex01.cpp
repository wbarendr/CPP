/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex01.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Wester <Wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 16:16:22 by Wester        #+#    #+#                 */
/*   Updated: 2020/10/04 15:03:07 by wester        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void        memoryLeak()
{
    std::string*        panther = new std::string("String panther");

    std::cout << *panther << std::endl;
    delete panther;
}

int         main(void)
{
    memoryLeak();
    // system("leaks a.out | grep bytes");
    return 0;
}
