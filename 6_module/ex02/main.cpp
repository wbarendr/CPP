/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wester <wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 10:38:33 by wester        #+#    #+#                 */
/*   Updated: 2020/10/09 11:21:22 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base(){}

Base*			generate(void){
	std::string str = "ABC";

	static bool first = false;
	if (!first){
		std::srand(time(0));
		first = true;
	}
	int num = std::rand() % 3;
	std::cout << "generated a " << str[num] << " class" << std::endl;
	if (num == 0)
		return new A;
	else if (num == 1)
		return new B;
	return new C;
}

void			identify_from_pointer(Base* p){
	A*	classA;
	B*	classB;
	C*	classC;

	classA = dynamic_cast<A*>(p);
	if (classA){
		std::cout << "class A confirmed" <<std::endl;
		return ;
	}
	classB = dynamic_cast<B*>(p);
	if (classB){
		std::cout << "class B confirmed" <<std::endl;
		return ;
	}
	classC = dynamic_cast<C*>(p);
	if (classC)
		std::cout << "class C confirmed" <<std::endl;
}

void 			identify_from_reference(Base& p){
	try {
		A classA = dynamic_cast<A&>(p);
		std::cout << "class A confirmed with reference" << std::endl;
		return ;
	}
	catch (std::exception &e){};
	try {
		B classB = dynamic_cast<B&>(p);
		std::cout << "class B confirmed with reference" << std::endl;
	}
	catch (std::exception &e){
		std::cout << "class C confirmed with reference" << std::endl;
	}
}

int				main(void){
	Base* p;

	p = generate();
	identify_from_pointer(p); 
	identify_from_reference(*p);
	
	system("leaks identify | grep bytes");
	return 0;
}
