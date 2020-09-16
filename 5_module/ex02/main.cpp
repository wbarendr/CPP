/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Wester <Wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/09 12:57:47 by Wester        #+#    #+#                 */
/*   Updated: 2020/09/10 16:05:57 by Wester        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

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
	std::cout << std::endl << "new:: -> forms:" << std::endl;

	try {
		Form* one = new ShrubberyCreationForm("Planet_9");
		Form* two = new RobotomyRequestForm("Venus");
		Form* three = new PresidentialPardonForm("Marvin");
		
		Bureaucrat Obama("Barackaaaa", 1);
		Bureaucrat Trump("the donald", 10);
		
		one->beSigned(Trump);
		two->beSigned(Trump);
		three->beSigned(Trump);
		
		one->execute(Obama);
		two->execute(Obama);
		three->execute(Obama);
	}
	catch (const std::exception& error){
		std::cout << error.what() << std::endl;
	}
	return 0;
}