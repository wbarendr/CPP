/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wester <wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/26 12:00:44 by wester        #+#    #+#                 */
/*   Updated: 2020/09/28 16:46:48 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int     main( void ) 
{ 
    Fixed           a;
    Fixed const     b( Fixed( 5.05f ) * Fixed( 2 ) );
    
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;

    
    std::cout << b << std::endl;
    
    
    std::cout << Fixed::max( a, b ) << std::endl;
    return 0; 
}
