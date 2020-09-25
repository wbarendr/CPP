/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wester <wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/24 22:58:44 by wester        #+#    #+#                 */
/*   Updated: 2020/09/24 23:37:29 by wester        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main(void)
{
    Span sp = Span(5);
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    int num = 55555;
    Span BIG = Span(num);
    for (int i = 0; i < num; ++i){
        BIG.addNumber((i + 88) * i / 8);
    }
    std::cout << BIG.shortestSpan() << std::endl;
    std::cout << BIG.longestSpan() << std::endl;

    return  0;    
}
