/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wester <wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/25 09:58:45 by wester        #+#    #+#                 */
/*   Updated: 2020/10/15 14:18:00 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

// int main()
// {
//     MutantStack<int> mstack;

//     mstack.push(5);
//     mstack.push(17);
//     mstack.push(17);
//     std::cout << "top: " << mstack.top() << std::endl;
//     mstack.pop();
//     std::cout << "size: " << mstack.size() << std::endl;
    
//     mstack.push(3);
//     mstack.push(5);
//     mstack.push(737); 
//     // mstack.push(0);
//     std::cout << "size: " << mstack.size() << std::endl;
//     MutantStack<int>::iterator it = mstack.begin();
//     MutantStack<int>::iterator ite = mstack.end();
//     std::cout << "first num: " << *it << "  and the last num: " << *(ite - 1) << std::endl;
//     ++it;
//     --it;
//     while (it != ite) {
//         std::cout << *it << std::endl;
//         ++it; 
//         }
//     std::stack<int> s(mstack);
    
//     std::cout << "----------" << std::endl;

//     MutantStack<int>::reverse_iterator r_it = mstack.rbegin();
//     MutantStack<int>::reverse_iterator r_ite = mstack.rend();
//      while (r_ite != r_it) {
//         std::cout << *r_ite << std::endl;
//         ++r_ite; 
//         }
    


//     return 0;
// }

int main()
{
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    
    mstack.push(3);
    mstack.push(5);
    mstack.push(737); //[...] mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    
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
//     std::list<int> mstack;

//     mstack.push_back(5);
//     mstack.push_back(17);
//     std::cout << mstack.back() << std::endl;
//     mstack.pop_back();  
//     std::cout << mstack.size() << std::endl;
    
//     mstack.push_back(3);
//     mstack.push_back(5);
//     mstack.push_back(737); //[...] mstack.push(0);
//     std::list<int>::iterator it = mstack.begin();
//     std::list<int>::iterator ite = mstack.end();
    
//     ++it;
//     --it;
//     while (it != ite) {
//         std::cout << *it << std::endl;
//         ++it; 
//         }
//     // std::stack<int> s(mstack);
    
//     return 0;
// }
