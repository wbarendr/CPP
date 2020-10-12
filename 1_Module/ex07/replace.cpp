/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   replace.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 13:36:27 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/10/12 11:53:41 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
// #include <cstdlib>


bool fexists1(const char * fname)
{
    std::ifstream f;
    f.open(fname);

    bool f_exists = f.is_open();

    f.close();
    return f_exists;
}

int         main(int argc, char **argv)
{
    std::ifstream f;
    std::string line;
    size_t pos;

    if (argc != 4)
    {
        std::cout << "Not right amount of arguments" << std::endl;
        return -1;
    }
    if (!argv[2] || !argv[3] || !argv[2][0] || !argv[3][0])
    {
        std::cout << "One or both strings were empty" << std::endl;
        return -1;
    }
    if (!fexists1(argv[1]))
    {
        std::cout << "File didn't exist!" << std::endl;
        return -1;
    }
    f.open(argv[1]);
    if (f.is_open())
    {
        if (getline(f, line)){
            std::ofstream new_file("FILENAME.replace");
            pos = line.find(argv[2]);
            while (pos != std::string::npos)
            {
                if (pos != std::string::npos){
                    line.replace(pos, strlen(argv[2]), argv[3]);
                }
                pos = line.find(argv[2], pos + strlen(argv[3]));
            }
            new_file << line << std::endl;
            while (getline(f, line))
            {
                pos = line.find(argv[2]);
                while (pos != std::string::npos)
                {
                    if (pos != std::string::npos){
                        line.replace(pos, strlen(argv[2]), argv[3]);
                    }
                    pos = line.find(argv[2], pos + strlen(argv[3]));
                }
                new_file << line << std::endl;
            }
            new_file.close();
        }
        else 
            std::cout << "file was empty or didn't give me an actually file." << std::endl;
    }
    return 0; 
}
