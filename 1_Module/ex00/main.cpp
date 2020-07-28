/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 13:06:15 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/07/28 16:13:16 by Wester        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "pony.hpp"

void	ponyOnTheStack(void)
{
	Pony spony;
	spony.name = "stack";
	spony.head = "grey";
	spony.legs = "4";
	spony.ears = "big";
	std::cout << "head: " << spony.head << " |address:  " << &spony.head << std::endl;
	std::cout << "legs: " << spony.legs << " |address:  " << &spony.legs << std::endl;
	std::cout << "ears: " << spony.ears << " |address:  " << &spony.ears << std::endl;
}
	

void	ponyOnTheHeap(void)
{
	{
		Pony* hpony = new Pony();
	
		hpony->name = "heap";
		hpony->head = "purple";
		hpony->legs = "6";
		hpony->ears = "huge";
	
		std::cout << "head: " << hpony->head << " |address:  " << &hpony->head << std::endl;
		std::cout << "legs: " << hpony->legs << " |address:  " << &hpony->legs << std::endl;
		std::cout << "ears: " << hpony->ears << " |address:  " << &hpony->ears << std::endl;
		delete hpony;
	}
}

int     main(void)
{
	std::cout << "[--STACK--]" << std::endl;
	ponyOnTheStack();
	std::cout << "[--HEAP--]" << std::endl;
	ponyOnTheHeap();
	return 0;    
}