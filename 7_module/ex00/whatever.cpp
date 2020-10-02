/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   whatever.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: wester <wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 12:01:29 by wester        #+#    #+#                 */
/*   Updated: 2020/10/02 11:05:39 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
void    swap(T& a, T& b){
    T tmp = a;
    
    a = b;
    b = tmp;
}

template<typename T>
T       min(T& a, T& b){
    if (a < b)
        return a;
    return b;
}

template<typename T>
T       max(T& a, T& b){
    if (a > b)
        return a;
    return b;
}

int main( void ) {
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    float x = 2.2;
    float y = 8.8;
    std::cout << "x: " << x << "  y: " << y << std::endl;
    swap(x, y);
    std::cout << "x: " << x << "  y: " << y << std::endl;
    std::cout << "min " << min(x, y) << std::endl;
    std::cout << "max " << max(x, y) << std::endl;
    return 0;
}
