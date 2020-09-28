/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: Wester <Wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 17:32:33 by Wester        #+#    #+#                 */
/*   Updated: 2020/09/28 12:20:37 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::~Sorcerer(){
    std::cout << name << ", " << title << " is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer(std::string _name, std::string _title){
    name = _name;
    title = _title;
    std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer& other){
    *this = other;
}

Sorcerer& Sorcerer::operator=(const Sorcerer& other)
{
    name = other.name;
    title = other.title;
	return *this;
}

void    Sorcerer::polymorph(Victim const & _vic)const {
    _vic.getPolymorphed();
}

std::string  Sorcerer::getTitle()const {
    return title;
}

std::string  Sorcerer::getName()const {
    return name;
}

std::ostream& operator<<(std::ostream& stream, const Sorcerer& other)
{
	stream << "I am " << other.getName() << ", " << other.getTitle() << ", and I like ponies!" << std::endl;
	return stream;
}
