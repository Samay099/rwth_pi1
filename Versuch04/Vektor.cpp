//////////////////////////////////////////////////////////////////////////////
// Praktikum Informatik 1 
// 
// Versuch 04: Einf�hrung Klasse
//
// Datei:  Vektor.cpp
// Inhalt: Sourcedatei der Klasse Vektor
//////////////////////////////////////////////////////////////////////////////

#include "Vektor.h"

Vektor::Vektor(double inX, double inY, double inZ) : x(inX), y(inY), z(inZ)
{

}

Vektor::~Vektor()
{

}


/**
 * @brief Funktion, die zwei Vektoren subtrahiert
 * @param input Zu subtrahierender Vektor
 * @return Ergebnisvektor
 */
Vektor Vektor::sub(const Vektor& input) const
{
    return Vektor((this->x - input.x),(this->y - input.y),(this->z - input.z));
}

/** 
 * @brief Funktion, die die Länge des Vektors zurückgibt
 * @return Länge des Vektors
 */
double Vektor::laenge() const
{
    return sqrt((x*x)+(y*y)+(z*z));
}

/**
 * @brief Funktion, die das Skalarprodukt zweier Vektoren berechnet
 * @param input Zweiter Vektor
 * @return Skalarprodukt
 */
double Vektor::skalarProd(const Vektor& input) const
{
    return ((this->x * input.x)+(this->y * input.y)+(this->z * input.z));
}

/**
 * @brief Funktion, die den Winkel zwischen zwei Vektoren berechnet
 * @param input Zweiter Vektor
 * @return Winkel zwischen den Vektoren
 */
double Vektor::winkel(const Vektor& input) const
{
    double dWinkel = acos(skalarProd(input)/(this->laenge() * input.laenge()));
    double dWinkelGrad = dWinkel * 180/M_PI;
    return dWinkelGrad;
}

/**
 * @brief Funktion, die einen Vektor um die z-Achse rotiert
 * @param rad Winkelgrad in rad für die Rotation
 */
void Vektor::rotiereUmZ(const double rad)
{
    double dtempX = this->x;
    double dtempY = this->y;
    
    this->x = dtempX * cos(rad) - dtempY *sin(rad);
    this->y = dtempX * sin(rad) + dtempY *cos(rad) ; 
}



/**
 * @brief Function printing the components of the vector 
 */
void Vektor::ausgabe() const
{
    std::cout << "X-Komponente: " << x << std::endl;
    std::cout << "Y-Komponente: " << y << std::endl;
    std::cout << "Z-Komponente: " << z << std::endl << std::endl;
}
