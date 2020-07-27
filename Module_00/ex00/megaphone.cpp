/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 12:37:13 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/07/27 14:52:30 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

struct   convert
{
    void operator()(char& c) 
    {
        c = toupper(c);
    }
};

int     main(int argc, char **argv)
{
    if (argc < 2) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n"; 
        return 0;
    };
    for (int i = 1; i < argc; ++i)
    {
        std::string data = argv[i];
        std::for_each(data.begin(), data.end(), convert());
        std::cout << data;
    };
    std::cout << "\n";
    return 0;
}