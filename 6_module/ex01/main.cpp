/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/16 15:09:47 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/09/16 17:19:07 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>

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
    if (!false){
        std::srand(std::time(0));
        first = true;
    }
    // data_n->n = 12;
    // for (int i = 0; i < 7; ++i){
    //     data_n->s1[i] = 'h';
    //     data_n->s2[i] = 'p';
    // }
    // data_n->s1[7] = 0;
    // data_n->s2[7] = 0;
    data_n->n = std::rand();
    for (int i = 0; i < 8; ++i){
            data_n->s1.push_back(alpha_num[std::rand() % 62]);
            data_n->s2.push_back(alpha_num[std::rand() % 62]);
    }
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
    two++;
    char* three = (char *)two;
    for (int i = 0; i < 8 ; ++i){
        *three = data_n->s2[i];
        three++;
    }
    return (void*)one;
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

int             main(void)
{
    void*   raw;
    Data*   data_n;

    raw = serialize();
    std::string str = (char *)raw;
    // str+= 8;
    char *num_c = (char *)raw;
    num_c += 8;
    int* num = (int *)num_c;
    std::cout << "raw: s1  " << &str << "  " << str.substr(0, 8) << std::endl;
    std::cout << "raw: NUM  " << &str << "  " << *num << std::endl;
    std::cout << "raw: s2  " << &str << "  " << str.substr(12, 19) << std::endl;

    data_n = deserialize(raw);
    std::cout << "s1  " << &data_n->s1 << "  " << data_n->s1 << std::endl;
    std::cout << "n   " << &data_n->n << "  " << data_n->n << std::endl;
    std::cout << "s2  " << &data_n->s2 << "  " << data_n->s2 << std::endl;
    return 0;
}