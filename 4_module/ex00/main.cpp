/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/06 13:50:35 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/09/28 12:21:08 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Peasant.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Peasant tyler("frenchie");

	std::cout << robert << jim << joe;
	std::cout << robert << jim << tyler;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(tyler);

	// system("leaks a.out | grep bytes");
	return 0;
}

// int main()
// {
// 	Sorcerer robert("Robert", "the Magnificent");
// 	Victim jim("Jimmy");
// 	Peon joe("Joe");
// 	std::cout << robert << jim << joe;
// 	robert.polymorph(jim);
// 	robert.polymorph(joe);
// 	return 0;
// }
