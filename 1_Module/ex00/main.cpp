/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 13:06:15 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/07/28 14:02:17 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "pony.hpp"

Pony::~Pony(void)
{
	std::cout << "delete";
}

Pony::Pony(std::string head, std::string legs, std::string ears);
{
	std::cout << "constructor";
}

void	ponyOnTheStack(void)
{
	Pony spony("short", "four", "small");
	std::cout << spony.head; 
}
	

// void	ponyOnTheHeap(void)
// {
// 	Pony* hpony = new Pony("short", "six", "big");
// }

int     main(void)
{
	
	ponyOnTheStack();
	// ponyOnTheHeap();

	return 0;    
}