/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wester <wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/25 09:58:45 by wester        #+#    #+#                 */
/*   Updated: 2020/10/14 14:44:04 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int main()
{
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);
    std::cout << "top: " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "size: " << mstack.size() << std::endl;
    
    mstack.push(3);
    mstack.push(5);
    mstack.push(737); 
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    std::cout << "begin: " << *it << "  and the end: " << *ite << std::endl;
    ++it;
    --it;
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it; 
        }
    std::stack<int> s(mstack);
    
    return 0;
}

// int main()
// {
//     MutantStack<int> mstack;

//     mstack.push(5);
//     mstack.push(17);
//     std::cout << mstack.top() << std::endl;
//     mstack.pop();
//     std::cout << mstack.size() << std::endl;
    
//     mstack.push(3);
//     mstack.push(5);
//     mstack.push(737); //[...] mstack.push(0);
//     MutantStack<int>::iterator it = mstack.begin();
//     MutantStack<int>::iterator ite = mstack.end();
    
//     ++it;
//     --it;
//     while (it != ite) {
//         std::cout << *it << std::endl;
//         ++it; 
//         }
//     std::stack<int> s(mstack);
    
//     return 0;
// }
