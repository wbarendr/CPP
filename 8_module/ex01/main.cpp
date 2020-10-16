/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wester <wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/24 22:58:44 by wester        #+#    #+#                 */
/*   Updated: 2020/10/16 11:40:50 by wbarendr      ########   odam.nl         */
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

    int num = 555;
    Span BIG = Span(num);
    for (int i = 0; i < num; ++i){
        BIG.addNumber(i * 8 + 88);
    }
    std::cout << BIG.shortestSpan() << std::endl;
    std::cout << BIG.longestSpan() << std::endl;


    Span Sick = Span(2);
    try {
        // Sick.addNumber(0);
        Sick.addNumber(INT_MAX);
        Sick.addNumber(INT_MIN);
    }
    catch (const std::exception e){
        std::cout << "didn't work with this span " << std::endl;
    }

    std::cout << "short: " << Sick.shortestSpan() << std::endl;
    std::cout << "long: " << Sick.longestSpan() << std::endl;
    
    std::vector<int> Mucho;

    for (int i = 0; i < 25789; ++i){
        Mucho.push_back(i * 7);
    }
    Span grande = Span(12789);
    grande.addNumber(Mucho.begin(), Mucho.end());
    grande.addNumber(Mucho.begin(), Mucho.end());

    try {
        std::cout << "short: " << grande.shortestSpan() << std::endl;
        std::cout << "long: " << grande.longestSpan() << std::endl;
    }
    catch (const std::exception e){
        std::cout << "didn't work with this span " << std::endl;
    }
    return  0;    
}
