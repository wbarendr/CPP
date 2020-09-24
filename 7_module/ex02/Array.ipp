/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.ipp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: wester <wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 17:38:32 by wester        #+#    #+#                 */
/*   Updated: 2020/09/24 10:27:47 by wester        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<class T>
Array<T>::Array():
    _arr(NULL), 
    _size(0)
{}

template<class T>
Array<T>::Array(unsigned int n){
    _size = n;
    if (n)
        _arr = new T[n];
    else
        _arr = NULL;
}

template<class T>
Array<T>::Array(const Array& other){
    *this = other;
}

template<class T>
Array<T>&              Array<T>::operator=(const Array& other){
    _size = other._size;
    _arr = NULL;
    if (_size){
        _arr = new T[_size];
        for (int i = 0; i < _size; ++i)
            _arr[i] = other._arr[i];
    }
    return *this;
}

template<class T>
Array<T>::~Array()
{}

template<class T>
unsigned int        Array<T>::getSize(void) const{
    return _size;
}

template<class T>
T&                  Array<T>::operator[](int n){
    if (n < 0 || n >= (int)_size)
        throw std::out_of_range("pleas stay within limits..");
    return _arr[n];
}
