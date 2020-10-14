/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   whatever.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: wester <wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 12:01:29 by wester        #+#    #+#                 */
/*   Updated: 2020/10/13 16:58:10 by wbarendr      ########   odam.nl         */
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

class
Awesome {
public:
Awesome( int n ) : _n( n ) {}
int     getInt(){return _n;};
bool operator==( Awesome const & rhs ) { return (this->_n == rhs._n); }
bool operator!=( Awesome const & rhs ) { return (this->_n != rhs._n); }
bool operator>( Awesome const & rhs ) { return (this->_n > rhs._n); }
bool operator<( Awesome const & rhs ) { return (this->_n < rhs._n); }
bool operator>=( Awesome const & rhs ) { return (this->_n >= rhs._n); }
bool operator<=( Awesome const & rhs ) { return (this->_n <= rhs._n); }
private:
int _n;
};

int main( void ) {
    
    Awesome a = 2;
    Awesome b = 3;
    
    ::swap( a, b );
    std::cout << "a = " << a.getInt() << ", b = " << b.getInt() << std::endl;
    // std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    // std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    // std::string c = "chaine1";
    // std::string d = "chaine2";
    // ::swap(c, d);
    // std::cout << "c = " << c << ", d = " << d << std::endl;
    // std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    // std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    // float x = 2.2;
    // float y = 8.8;
    // std::cout << "x: " << x << "  y: " << y << std::endl;
    // swap(x, y);
    // std::cout << "x: " << x << "  y: " << y << std::endl;
    // std::cout << "min " << min(x, y) << std::endl;
    // std::cout << "max " << max(x, y) << std::endl;

    // Awesome *me = new Awesome;
    return 0;
}
