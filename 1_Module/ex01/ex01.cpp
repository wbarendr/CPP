/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex01.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Wester <Wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 16:16:22 by Wester        #+#    #+#                 */
/*   Updated: 2020/07/28 16:22:09 by Wester        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void        memoryLeak()
{
    std::string*        panther = new std::string("String panther");

    std::cout << *panther << std::endl;
    delete panther;
}
