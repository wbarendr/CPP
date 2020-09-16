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

struct          Data
{
    std::string     s1;
    int             n;
    char            s2[8];
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
            data_n->s1[i] = alpha_num[std::rand() % 62];
            data_n->s2[i] = alpha_num[std::rand() % 62];
    }
    return data_n;
}

void*           serialize(void){
    Data* data_n = create_data();
    
    char* one = new char[sizeof(data_n)];
    for (int i = 0; i < 8 ; ++i){
        one[i] = data_n->s1[i];
        std::cout << data_n->s1[i] << std::endl;
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
        data_n->s1[i] = *one;
        one++;
    }
    int* two = (int *)one;
    data_n->n = *two;
    two++;
    char * three = (char *)two;
    for (int i = 0; i < 8 ; ++i){
        data_n->s2[i] = three[i];
    }
    return data_n;
}

int             main(void)
{
    void*   raw;
    Data*   data_n;

    raw = serialize();
    data_n = deserialize(raw);
    std::cout << "s1  " << &data_n->s1 << "  " << data_n->s1 << std::endl;
    std::cout << "n   " << &data_n->n << "  " << data_n->n << std::endl;
    std::cout << "s2  " << &data_n->s2 << "  " << data_n->s2 << std::endl;
    return 0;
}