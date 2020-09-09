/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Wester <Wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/09 12:57:47 by Wester        #+#    #+#                 */
/*   Updated: 2020/09/09 15:33:32 by Wester        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int         main(void)
{
	std::cout << "wester:" << std::endl;
	try {
		Bureaucrat wester("wessa_b", 100);

		std::cout << wester << std::endl;	
		wester.increment();
		std::cout << wester << std::endl;
	}
	catch (const std::exception& error){
		std::cout << error.what() << std::endl;
	}
	
	std::cout << std::endl << "piet:" << std::endl;
	
	try {
		Bureaucrat piet("pi_et", 180);

		std::cout << piet << std::endl;	
		piet.increment();
		std::cout << piet << std::endl;
	}
	catch (const std::exception& error){
		std::cout << error.what() << std::endl;
	}
	std::cout << std::endl << "kees:" << std::endl;
	
	try {
		Bureaucrat kees("cheese", 1);

		std::cout << kees << std::endl;	
		kees.increment();
		std::cout << kees << std::endl;
	}
	catch (const std::exception& error){
		std::cout << error.what() << std::endl;
	}

	std::cout << std::endl << "joe:" << std::endl;
	try {
		Bureaucrat joe("joe_random", 149);

		std::cout << joe << std::endl;	
		joe.decrement();
		std::cout << joe << std::endl;
		joe.decrement();
		std::cout << joe << std::endl;
	}
	catch (const std::exception& error){
		std::cout << error.what() << std::endl;
	}
	
	std::cout << std::endl << "wester -> form" << std::endl;
	try {
		Bureaucrat wester("wessa_b", 100);
		Form law("muy_importante", 99, 1);

		std::cout << law << std::endl;
		law.beSigned(wester);
	}
	catch (const std::exception& error){
		std::cout << error.what() << std::endl;
	}

	std::cout << std::endl << "kees -> form:" << std::endl;
	try {
		Bureaucrat kees("keesy", 100);
		Form law("also_importante", 99, 10);

		std::cout << law << std::endl;
		kees.increment();
		law.beSigned(kees);
		std::cout << law << std::endl;
	}
	catch (const std::exception& error){
		std::cout << error.what() << std::endl;
	}
	return 0;
}
