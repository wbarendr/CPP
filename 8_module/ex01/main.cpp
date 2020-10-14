/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wester <wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/24 22:58:44 by wester        #+#    #+#                 */
/*   Updated: 2020/10/14 15:15:30 by wbarendr      ########   odam.nl         */
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

    int num = 5555;
    Span BIG = Span(num);
    for (int i = 0; i < num; ++i){
        BIG.addNumber((i + 88) * i / 8);
    }
    std::cout << BIG.shortestSpan() << std::endl;
    std::cout << BIG.longestSpan() << std::endl;


    Span Sick = Span(2);
    Sick.addNumber(INT_MAX);
    Sick.addNumber(INT_MIN);

    std::cout << "short: " << Sick.shortestSpan() << std::endl;
    std::cout << "long: " << Sick.longestSpan() << std::endl;
    
    return  0;    
}
