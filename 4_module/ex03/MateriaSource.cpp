/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/03 13:31:53 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/09/28 12:36:43 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
    for (int i = 0; i < 4; i++) {
        _materia[i] = NULL;
    }
}

MateriaSource::MateriaSource(const MateriaSource& other) {
    *this = other;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) {

    for (int i = 0; i < 4; i++) {
        _materia[i] = other._materia[i];
    }
    return *this;
}

MateriaSource::~MateriaSource() {}

void MateriaSource::learnMateria(AMateria* materia) {
    int i = 0;
    
    while (i < 4) {
        if (_materia[i] == NULL) {
            break;
        }
        i++;
    }
    if (i != 4)
        _materia[i] = materia;
    else
        std::cout << "MateriaSource slots are full" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const& type) {

    if (type == "ice")
        return new Ice();
    else if (type == "cure")
        return new Cure();
    else if (type == "fire")
        return new Fire();
    return NULL;
}
