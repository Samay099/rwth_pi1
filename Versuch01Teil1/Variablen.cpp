//////////////////////////////////////////////////////////////////////////////
// Praktikum Informatik 1 
// 
// Versuch 1.1: Datentypen und Typumwandlung
//
// Datei:  Variablen.cpp
// Inhalt: Hauptprogramm
//////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>

int main()
{
    int iErste = 0;
    int iZweite = 0;


    std::cout<<"Erste Nummer eingeben: ";
    std::cin>>iErste;
    std::cout<<"\n";
    std::cout<<"Zweite Nummer eingeben: ";
    std::cin>>iZweite;
    std::cout<<"\n";

    int iSumme = 0;
    iSumme = iErste+iZweite;

    int iQuotient = 0;
    iQuotient = iErste/iZweite;

    std::cout<<"Summe von "<<iErste<<" und "<<iZweite<<" ist : "<<iSumme<<"\n";
    std::cout<<"Quotient von "<<iErste<<" und "<<iZweite<<" ist : "<<iQuotient<<"\n";

    double dSumme = 0.0;
    dSumme = iErste+iZweite;

    double dQuotient = 0.0;
    dQuotient = iErste/iZweite;

    std::cout<<"Summe von "<<iErste<<" und "<<iZweite<<" ist : "<<dSumme<<"\n";
    std::cout<<"Quotient von "<<iErste<<" und "<<iZweite<<" ist : "<<dQuotient<<"\n";
    
    double dSummeCast = 0.0;
    dSummeCast =(double)iErste+iZweite;

    double dQuotientCast = 0.0;
    dQuotientCast = (double)iErste/iZweite;

    std::cout<<"Summe von "<<iErste<<" und "<<iZweite<<" ist : "<<dSummeCast<<"\n";
    std::cout<<"Quotient von "<<iErste<<" und "<<iZweite<<" ist : "<<dQuotientCast<<"\n";


    std::string sVorname = "\0";
    std::string sNachname = "\0";
    
    std::cout<<"Vorname eingeben: ";
    std::cin>>sVorname;
    std::cout<<"\n";
    std::cout<<"Nachname eingeben: ";
    std::cin>>sNachname;
    std::cout<<"\n";

    std::string sVornameName = sVorname+sNachname;
    std::string sNameVorname = sNachname+sVorname;

    std::cout<<sVornameName<<"\n";
    std::cout<<sNameVorname<<"\n";

    {
        int iFeld[2] = {1,2};

        std::cout<<"iFeld[0] : "<<iFeld[0]<<"\n";
        std::cout<<"iFeld[1] : "<<iFeld[1]<<"\n";

        int ispielfeld[2][3];

        ispielfeld[0][0] = 1;
        ispielfeld[0][1] = 2;
        ispielfeld[0][2] = 3;
        ispielfeld[1][0] = 4;
        ispielfeld[1][1] = 5;
        ispielfeld[1][2] = 6;


        int i = 0;
        int j = 0;

        for(i = 0; i < 2; i++)
        {
            for(j = 0; j < 3; j++)
            {
                std::cout<<ispielfeld[i][j]<<" ";
            }
            std::cout<<"\n";
        }

        std::cout<<"\n";
        
        const int iZweite = 1;
        std::cout<<"iZweite : "<<iZweite<<"\n";

        int iName1 = (int)sVorname[0];
        int iName2 = (int)sVorname[1];

        std::cout<<"iName1 : "<<iName1<<"\n";
        std::cout<<"iName2 : "<<iName2<<"\n";

       

        int iPos1 = iName1%32;
        int iPos2 = iName2%32;

        std::cout<<"Die Position des ersten Buchstabens ist : "<<iPos1<<"\n";
        std::cout<<"Die Position des zweiten Buchstabens ist : "<<iPos2<<"\n";
        
    }
    std::cout<<"iZweite : "<<iZweite<<"\n";

    return 0;
    
}
