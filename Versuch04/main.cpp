//////////////////////////////////////////////////////////////////////////////
// Praktikum Informatik 1 MMXXV
// Versuch 04: Einf�hrung Klasse
//
// Datei:  main.cpp
// Inhalt: Hauptprogramm
//////////////////////////////////////////////////////////////////////////////

#include "Vektor.h"

#define KOERPERGROESSE 1.70
#define PLATFORMHOEHE 555.7
#define ERDRADIUS 6371
#define ROTATERAD M_PI/300000000

int main()
{
    /*
        Vektor vector1(1, 0, 0);
        Vektor vector2(0, 1, 0);

        vector1.ausgabe();
        vector2.ausgabe();

        std::cout << "--- Test: laenge() ---" << std::endl;
        std::cout << "Laenge von vector1: " << vector1.laenge() << std::endl;
        std::cout << "Laenge von vector2: " << vector2.laenge() << std::endl;
        std::cout << std::endl;

        
        std::cout << "--- Test: sub() ---" << std::endl;
        Vektor vector3 = vector1.sub(vector2);
        std::cout << "vector1 - vector2: ";
        vector3.ausgabe(); 
        
        std::cout << "--- Test: skalarProd() ---" << std::endl;
        std::cout << "Skalarprodukt von vector1 und vector2: " << vector1.skalarProd(vector2) << std::endl;


        std::cout << "--- Test: winkel() ---" << std::endl;
        std::cout << "Winkel zwischen vector1 und vector2: " << vector1.winkel(vector2) << " Grad" << std::endl;
        

        std::cout << "--- Test: rotiereUmZAchse() ---" << std::endl;
        Vektor vector4(1.0, 1.0, 1.0);
        std::cout << "Original Vektor vector4: ";
        vector4.ausgabe();

        // Rotation um 45 Grad (PI/4 Radiant)
        vector4.rotiereUmZ(M_PI / 4.0);
        std::cout << "vector4 nach 90 Grad Rotation um z-Achse: "<<std::endl;
        vector4.ausgabe(); 
    */
    Vektor erdRadius(0, ERDRADIUS, 0);      // bitte sinnvoll initialisieren
    Vektor aussichtsPunkt(0, ((KOERPERGROESSE + PLATFORMHOEHE)/1000 + ERDRADIUS), 0); // bitte sinnvoll initialisieren

    int iAnzahlSchritte = 0;

    Vektor sicht = erdRadius.sub(aussichtsPunkt);


    //bis Skalar Produkt fast 0 ist , d.h. das Vektor orthogonal ist
    while(std::abs(sicht.skalarProd(erdRadius)) > 0.001)
    {

        erdRadius.rotiereUmZ(ROTATERAD);
        sicht = erdRadius.sub(aussichtsPunkt);


        iAnzahlSchritte++;
    }

    std::cout << std::fixed;
	std::cout << std::setprecision(4);
	std::cout << "Sie können " << sicht.laenge() << " Km weit sehen" << std::endl;
	std::cout << "Sie sind " << PLATFORMHOEHE << " Meter hoch." << std::endl;
	std::cout << "Der Winkel beträgt " << aussichtsPunkt.winkel(erdRadius) << " Grad." << std::endl;
	std::cout << "Anzahl Schritte: " << iAnzahlSchritte << std::endl;

    return 0;

}
