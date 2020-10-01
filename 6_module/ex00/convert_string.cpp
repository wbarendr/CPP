/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   convert_string.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: Wester <Wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/11 11:27:34 by Wester        #+#    #+#                 */
/*   Updated: 2020/10/01 17:55:58 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include <iomanip>

bool        find_dot(std::string str){
	int count = 0;
	char* str2 = "0123456789";
	int not_num = 0;
	for (int i = 0; str[i]; ++i){
		if (str[i] == '.')
			count++;
		else {
			for (int j = 0; str2[j]; ++j){
				if (str2[j] != str[i])
					not_num++;
			}
			if (not_num == 9)
				not_num = 0;
		}
	}
	if (count == 1 && not_num == 0)
		return true;
	if (str == "+inf" || str == "-inf" || str == "nan")
		return true;
	return false;
}

bool        find_num(std::string str){
	char nums[11] = "0123456789";

	for (int i = 0; nums[i]; ++i){
		if (str[0] == nums[i] || str[1] == nums[i])
			return true;
	}
	return false;
}

void        print_char(int num){
	if (isprint(num))
		std::cout << "char: \'" << static_cast<char>(num) << "\'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
}

void        convert_float(std::string str){
	if (str == "+inff" || str == "-inff" || str == "nanf"){
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << str << std::endl;
		str.back() = 0;
		std::cout << "double: " << str << std::endl;
		return ;
	}
	float fl = std::stof(str);
	std::cout << "num  " << fl << std::endl;

	print_char(static_cast<int>(fl));
	std::cout << "int: " << static_cast<int>(fl) << std::endl;
	std::cout << "float: " << str << std::endl;
	str.back() = 0;
	std::cout << "double: " << str << std::endl;
	
}

void        convert_double(std::string str){
	if (str == "+inf" || str == "-inf" || str == "nan"){
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << str << "f" << std::endl;
		std::cout << "double: " << str << std::endl;
		return ;
	}
	
	long double db = std::stof(str);
	print_char(static_cast<int>(db));
	std::cout << "int: " << static_cast<int>(db) << std::endl;
	std::cout << "float: " << std::setprecision(str.length()) << str << "f" << std::endl;
	std::cout << "double: " << str << std::endl;
	
}

void        convert_int(std::string str){
	int num = std::stoi(str);
	
	print_char(num);
	std::cout << "int: " << num << std::endl;
	std::cout << "float: " << num << ".0f" << std::endl;
	std::cout << "double: " << num << ".0" << std::endl;
}

void		convert_char(std::string str){
	int num = static_cast<int>(str[0]);
	
	print_char(num);
	std::cout << "int: " << num << std::endl;
	std::cout << "float: " << num << ".0f" << std::endl;
	std::cout << "double: " << num << ".0" << std::endl;
		
}

void		find_float(std::string str){
	str.back() == 'f' && str[1] != 0 && str != "+inf" && str != "-inf")
}

void        find_type(std::string str){
	if (find_float(str)  //
		convert_float(str);
	else if (find_dot(str))
		convert_double(str);
	else if (find_num(str))
		convert_int(str);
	else if (isprint(str[0]) && !str[1])
		convert_char(str);
	else
		std::cout << "something went terribly wrong!" << std::endl;
}

int         main(int argc, char **argv){
	if (argc != 2){
		std::cout << "feed me one string please" << std::endl;
		return 1;
	}
	find_type(argv[1]);
	return 0;
}
