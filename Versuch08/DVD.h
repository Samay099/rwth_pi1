/*!
 * Praktikum Informatik 1 MMXXV
 *
 * @file DVD.h
 */

#include <iostream>
#include<string>
#include "Medium.h"

class DVD : public Medium
{
    public:
        DVD(std::string initTitel, int initAltersfreigabe, std::string initGenre);
        virtual ~DVD();


        void ausgabe() const;
        bool ausleihen(Person person, Datum ausleihdatum);


    private:
        int iAltersfreigabe;
        std::string Genre;
};