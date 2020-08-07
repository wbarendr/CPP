/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/06 13:50:35 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/08/06 14:50:08 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

std::ostream& operator<<(std::ostream& stream, const Victim& other)
{
	stream << "I'm " << other.getName() << " and I like otters!" << std::endl;
	return stream;
};

std::ostream& operator<<(std::ostream& stream, const Sorcerer& other)
{
	stream << "I am " << other.getName() << ", " << other.getTitle() << ", and I like ponies!" << std::endl;
	return stream;
};

int main()
{
Sorcerer robert("Robert", "the Magnificent");
Victim jim("Jimmy");
Peon joe("Joe");
std::cout << robert << jim << joe;
robert.polymorph(jim);
robert.polymorph(joe);
return 0;
}
