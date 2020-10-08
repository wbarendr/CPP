/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: Wester <Wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/09 12:57:47 by Wester        #+#    #+#                 */
/*   Updated: 2020/10/08 12:09:10 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
// #include "Bureaucrat.hpp"

int         main(void)
{
	// std::cout << "wester:" << std::endl;
	// try {
	// 	Bureaucrat wester("wessa_b", 100);

	// 	std::cout << wester << std::endl;	
	// 	wester.increment();
	// 	std::cout << wester << std::endl;
	// }
	// catch (const std::exception& error){
	// 	std::cout << error.what() << std::endl;
	// }
	
	// std::cout << std::endl << "piet:" << std::endl;
	
	// try {
	// 	Bureaucrat piet("pi_et", 180);

	// 	std::cout << piet << std::endl;	
	// 	piet.increment();
	// 	std::cout << piet << std::endl;
	// }
	// catch (const std::exception& error){
	// 	std::cout << error.what() << std::endl;
	// }
	// std::cout << std::endl << "kees:" << std::endl;
	
	// try {
	// 	Bureaucrat kees("cheese", 1);

	// 	std::cout << kees << std::endl;	
	// 	kees.increment();
	// 	std::cout << kees << std::endl;
	// }
	// catch (const std::exception& error){
	// 	std::cout << error.what() << std::endl;
	// }

	// std::cout << std::endl << "joe:" << std::endl;
	// try {
	// 	Bureaucrat joe("joe_random", 149);

	// 	std::cout << joe << std::endl;	
	// 	joe.decrement();
	// 	std::cout << joe << std::endl;
	// 	joe.decrement();
	// 	std::cout << joe << std::endl;
	// }
	// catch (const std::exception& error){
	// 	std::cout << error.what() << std::endl;
	// }
	
	// std::cout << std::endl << "wester -> form" << std::endl;
	// try {
	// 	Bureaucrat wester("wessa_b", 100);
	// 	Form law("muy_importante", 99, 1);

	// 	std::cout << law << std::endl;
	// 	law.beSigned(wester);
	// }
	// catch (const std::exception& error){
	// 	std::cout << error.what() << std::endl;
	// }

	// std::cout << std::endl << "kees -> form:" << std::endl;
	// try {
	// 	Bureaucrat kees("keesy", 100);
	// 	Form law("also_importante", 99, 10);

	// 	std::cout << law << std::endl;
	// 	kees.increment();
	// 	law.beSigned(kees);
	// 	std::cout << law << std::endl;
	// }
	// catch (const std::exception& error){
	// 	std::cout << error.what() << std::endl;
	// }
	std::cout << std::endl << "new:: -> forms:" << std::endl;

		Form* one = new ShrubberyCreationForm("Planet_9");
		Form* two = new RobotomyRequestForm("Venus");
		Form* three = new PresidentialPardonForm("Marvin");
		
		Bureaucrat Obama("Barackaaaa", 9);
		Bureaucrat Trump("the donald", 10);
	try {
		
		one->beSigned(Trump);
		Obama.executeForm(*one);
		std::cout << std::endl;
		
		Obama.executeForm(*two);
		two->beSigned(Trump);
		Obama.executeForm(*two);
		
		std::cout << std::endl;
		three->beSigned(Trump);
		Obama.executeForm(*three);
		std::cout << std::endl;
	}
	catch (const std::exception& error){
		std::cout << std::endl;
		std::cout << error.what() << std::endl;
	}
	
	return 0;
}
