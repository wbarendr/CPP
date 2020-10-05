/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/16 15:09:47 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/10/05 11:16:58 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

struct          Data
{
	std::string     s1;
	int             n;
	std::string     s2;
};

Data*       create_data(void){
	Data* data_n = new Data();
	std::string      alpha_num = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	static bool first = false;
	if (!first){
		std::srand(time(0));
		first = true;
	}
	data_n->n = std::rand();
	for (int i = 0; i < 8; ++i){
			data_n->s1.push_back(alpha_num[std::rand() % 61]);
			data_n->s2.push_back(alpha_num[std::rand() % 61]);
	}
	data_n->s2.push_back(0);
	return data_n;
}

void*           serialize(void){
	Data* data_n = create_data();
	
	char* one = new char[20];
	for (int i = 0; i < 8 ; ++i){
		one[i] = data_n->s1[i];
	}
	int* two = (int *)(one + 8);
	*two = data_n->n;
	(two)++;
	char* three = (char *)two;
	for (int i = 0; i < 8 ; ++i){
		*three = data_n->s2[i];
		three++;
	}
	delete data_n;
	return static_cast<void*>(one);
}

Data*       deserialize(void* raw){
	Data* data_n = new Data();

	char* one = (char *)raw;
	for (int i = 0; i < 8 ; ++i){
		data_n->s1.push_back(*one);
		one++;
	}
	int* two = (int *)one;
	data_n->n = *two;
	two++;
	char * three = (char *)two;
	for (int i = 0; i < 8 ; ++i){
		data_n->s2.push_back(three[i]);
	}
	return data_n;
}

std::string     ft_substr(std::string str, int start, int end){
	std::string new_str;

	for (int i = 0; start + i < end; ++i)
		new_str.push_back(str[start + i]);
	return new_str;
}

int             main(void)
{
	void*   raw;
	Data*   data_n;

	raw = serialize();
	
	std::string str = (char *)raw;
	char *num_c = (char *)raw;
	num_c += 8;
	int* num = (int *)num_c;
	
	std::cout << "raw s1:  " << &str << "  " << ft_substr(str, 0, 8) << std::endl;
	std::cout << "raw n:   " << &num_c << "  " << *num << std::endl;
	std::cout << "raw s2:  " << &str << "  " << ft_substr(str, 12, 20) << std::endl << std::endl;

	data_n = deserialize(raw);
	std::cout << "    s1:  " << &data_n->s1 << "  " << data_n->s1 << std::endl;
	std::cout << "    n:   " << &data_n->n << "  " << data_n->n << std::endl;
	std::cout << "    s2:  " << &data_n->s2 << "  " << data_n->s2 << std::endl;
	std::cout << std::endl << "    - - - - - - - - - - - - - - " << std::endl << std::endl;      
	
	delete static_cast<char*>(raw);
	delete data_n;
	
	system("leaks serialization | grep bytes");
	return 0;
}
