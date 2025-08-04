/*!
 * Praktikum Informatik 1 MMXXV
 *
 * @file Buch.h
 */

#include <iostream>
#include<string>
#include "Medium.h"

class Buch : public Medium
{
    public:
        Buch(std::string initTitel, std::string initAutor);
        virtual ~Buch();


        void ausgabe() const;


    private: 
        std::string AurtorName;
};