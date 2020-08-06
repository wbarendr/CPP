/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: Wester <Wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 17:32:33 by Wester        #+#    #+#                 */
/*   Updated: 2020/08/05 18:35:55 by Wester        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void){
    std::cout << "the class can't be iniciated like this, it doesn't make any sense!" << std::endl;
};

Sorcerer::~Sorcerer(){
    std::cout << name << ", " << title << " is dead. Consequences will never be the same!" << std::endl;
};

Sorcerer::Sorcerer(std::string _name, std::string _title){
    name = _name;
    title = _title;
    std::cout << name << ", " << title << ", is born!" << std::endl;
}

// s

int     main()
{
    Sorcerer *a = new Sorcerer("piet", "viezerik");
    
    std::cout << a <<std::endl;
    delete a;
    return 0;
}
