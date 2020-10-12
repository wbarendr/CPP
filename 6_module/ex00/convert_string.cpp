/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   convert_string.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: wester <wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/03 16:02:58 by wester        #+#    #+#                 */
/*   Updated: 2020/10/09 14:28:23 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "convert_string.hpp"

int			exceptions(std::string str){
	if (str == "+inf" || str == "+inff" || str == "-inf" || str == "-inff" 
	|| str == "nan" || str == "nanf"){
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
	}
	if (str == "+inf" || str == "+inff"){
		std::cout << "float: +inff" << std::endl << "double: +inf" << std::endl;
		return 1;
	}
	if (str == "-inf" || str == "-inff"){
		std::cout << "float: -inff" << std::endl << "double: -inf" << std::endl;
		return 1;
	}
	if (str == "nan" || str == "nanf"){
		std::cout << "float: nanf" << std::endl << "double: nan" << std::endl;
		return 1;
	}
	return 0;
}

int			error_message(std::string str){
	std::cout << str << std::endl;
	return 1;
}

int			find_type(std::string str, t_types* type){
	if (std::isprint(str[0]) && str.length() == 1 && !std::isdigit(str[0]))
			return 1;
	type->NEG = 0;
	if (str[0] == '-')
		type->NEG = 1;
	for (int i = type->NEG; str[i]; ++i){
		if (!std::isdigit(str[i]))
			break ;
		if (!str[i + 1])
			return 2;
	}
	int dot = 0;
	int i = type->NEG;
	for (; str[i + 1]; ++i){
		if (dot == 1 && str[i + 1] != 'f')
			type->num_fixed++;
		if (!std::isdigit(str[i])){
			if (dot == 1 || str[i] != '.')
				return 5;
			dot = 1;
		}
	}
	if (dot != 1)
		return 5;
	if (str[i] == 'f' && std::isdigit(str[i - 1]))
		return 3;
	if (std::isdigit(str[i]))
		return 4;
	return 5;
}

int			main(int argc, char **argv){
	if (argc != 2)
		return error_message("not right amount of arguments");
	if (argv[1][0] == 0)
		return error_message("argument is empty");
	if (exceptions(argv[1]))
		return 0;
	t_types type;
	type.num_fixed = 1;
	int check = find_type(argv[1], &type);
	// std::cout << check << std::endl;
	if (check == 5)
		return error_message("conversion is impossible");
	if (check == 1){
		std::cout << "INPUT IS A CHAR" << std::endl;
		type.C = argv[1][0];
		type.NUM = static_cast<int>(type.C);
		type.FL = static_cast<float>(type.C);
		type.DB = static_cast<double>(type.C);
	}
	else if (check == 2){
		std::cout << "INPUT IS A INT" << std::endl;
		type.DB = atof(argv[1]);
		if (type.DB > 2147483647 || type.DB < -2147483648)
			return error_message("input is over MAX int or under MIN int");
		type.NUM = atoi(argv[1]);
		type.C = static_cast<char>(type.NUM);
		type.FL = static_cast<float>(type.NUM);
		type.DB = static_cast<double>(type.NUM);
	}
	if (check == 3){
		std::cout << "INPUT IS A FLOAT" << std::endl;
		type.FL = atof(argv[1]);
		type.C = static_cast<char>(type.FL);
		type.NUM = static_cast<int>(type.FL);
		type.DB = static_cast<double>(type.FL);
	}
	if (check == 4){
		std::cout << "INPUT IS A DOUBLE" << std::endl;
		type.DB = atof(argv[1]);
		type.C = static_cast<char>(type.DB);
		type.NUM = static_cast<int>(type.DB);
		type.FL = static_cast<float>(type.DB);
	}
	if (type.DB > 2147483647 || type.DB < -2147483648){
			error_message("char: impossible");
			error_message("int: impossible");
	}
	else {
		if (isprint(type.C))
			std::cout << "char: \'" << type.C << "\'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
		std::cout << "int: " << type.NUM << std::endl;
	}
	std::cout << std::fixed << std::setprecision(type.num_fixed);
	std::cout << "float: " << type.FL << "f" << std::endl;
	std::cout << "double: " << type.DB << std::endl;
	
	return 0;
}
