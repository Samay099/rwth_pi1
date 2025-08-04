/*!
 * Praktikum Informatik 1 MMXXV
 *
 * @file Magazin.h
 */

#include <iostream>
#include<string>
#include "Medium.h"

class Magazin : public Medium
{
    public:
        Magazin(std::string initTitel, Datum initDatumAusgabe, std::string initSparte);
        virtual ~Magazin();


        void ausgabe() const;
        bool ausleihen(Person person, Datum ausleihdatum);


    private:
        Datum ausgabeDatum;
        std::string Sparte;
};