/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/06 13:50:35 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/10/08 15:18:45 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Peasant.hpp"

void	call_function1(void)
{	
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Peasant tyler("frenchie");
	Victim* Jim = new Peon("joe");

	delete Jim;
	std::cout << robert << jim << joe;
	std::cout << robert << jim << tyler;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(tyler);
}

void		call_function(void)
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);
}

int main()
{
	
	call_function();
	// call_function1();
	system("leaks a.out | grep bytes");
	return 0;
}
