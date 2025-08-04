/*!
 * Praktikum Informatik 1 MMXXV
 *
 * @file Buch.cpp
 */

#include "Buch.h"

#include <iostream>
#include <string>

Buch::Buch(std::string initTitel, std::string initAutor): Medium(initTitel), AurtorName(initAutor)
{
}

Buch::~Buch()
{
}


void Buch::ausgabe() const
{
    Medium::ausgabe();
    std::cout<< "Autor: "<<this->AurtorName<<std::endl;

}
