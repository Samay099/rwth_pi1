/*!
 * Praktikum Informatik 1 MMXXV
 *
 * @file DVD.cpp
 */

#include "DVD.h"

#include <iostream>
#include <string>

DVD::DVD(std::string initTitel, int initAltersfreigabe, std::string initGenre): 
                Medium(initTitel), iAltersfreigabe(initAltersfreigabe), Genre(initGenre)
{
}

DVD::~DVD()
{
}


void DVD::ausgabe() const
{
    Medium::ausgabe();
    std::cout<< "FSK: ab "<<this->iAltersfreigabe<<" Jahre"<<std::endl;
    std::cout<< "Genre: "<<this->Genre<<std::endl;
}

bool DVD::ausleihen(Person person, Datum ausleihdatum)
{
    Datum aktullesDatum;
    if(this->iAltersfreigabe < abs( (person.getGeburtsdatum() - aktullesDatum)/12) )
    {
        Medium::ausleihen(person,ausleihdatum);
        return true;
    }
    else
    {
        std::cout << "Die Person ist zu jung."<<std::endl;
		return false;
    }
}

