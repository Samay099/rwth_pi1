/*!
 * Praktikum Informatik 1 MMXXV
 *
 * @file Magazin.cpp
 */

#include "Magazin.h"

#include <iostream>
#include <string>

Magazin::Magazin(std::string initTitel, Datum initDatumAusgabe, std::string initSparte): 
                Medium(initTitel), ausgabeDatum(initDatumAusgabe), Sparte(initSparte)
{
}

Magazin::~Magazin()
{
}


void Magazin::ausgabe() const
{
    Medium::ausgabe();
    std::cout<< "Ausgabe: "<<this->ausgabeDatum<<std::endl;
    std::cout<< "Sparte: "<<this->Sparte<<std::endl;

}

bool Magazin::ausleihen(Person person, Datum ausleihdatum)
{
    if((this->ausgabeDatum - ausleihdatum) != 0)
    {
        Medium::ausleihen(person, ausleihdatum);
        return true;
    }
    else
    {
        std::cout << "Es handelt sich um die neueste Ausgabe des Magazins." << std::endl;
        return false;
    }
}
