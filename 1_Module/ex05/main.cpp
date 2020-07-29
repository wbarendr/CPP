/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Wester <Wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 20:45:42 by Wester        #+#    #+#                 */
/*   Updated: 2020/07/29 09:43:57 by Wester        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include "Brain.hpp"

// int main()
// {
//     Brain Bob;
    
//     std::cout << Bob.identify() << " . " << Bob.neurons << std::endl;
// }


int main()
{
    Human        bob;
    
    std::cout << bob.identify() << std::endl;
    std::cout << bob.getBrain().identify() << std::endl;
}