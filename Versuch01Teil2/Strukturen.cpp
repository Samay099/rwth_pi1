/////////////////////////////////////////////////////////////////////////////
// Praktikum Informatik 1 MMXXV
// Versuch 1.2: Strukturen
//
// Datei:  Strukturen.cpp
// Inhalt: Hauptprogramm
//////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>

struct Person
{
    std::string sNachname;
    std::string sVorname;
    int iGeburtsjahr;
    int iAlter;
};


int main()
{
    struct Person nBenutzer;
    
    std::cout<<"Nachname eingeben: ";
    std::cin>>nBenutzer.sNachname;
    
    std::cout<<"Vorname eingeben: ";
    std::cin>>nBenutzer.sVorname;
   
    std::cout<<"Geburtsjahr eingeben: ";
    std::cin>>nBenutzer.iGeburtsjahr;
  
    std::cout<<"Alter eingeben: ";
    std::cin>>nBenutzer.iAlter;
    std::cout<<"\n";


    struct Person nKopieEinzeln;
    struct Person nKopieGesamt;

    nKopieGesamt = nBenutzer;

    nKopieEinzeln.sNachname = nBenutzer.sNachname;
    nKopieEinzeln.sVorname = nBenutzer.sVorname;
    nKopieEinzeln.iGeburtsjahr = nBenutzer.iGeburtsjahr;
    nKopieEinzeln.iAlter = nBenutzer.iAlter;


    std::cout<<"----------Benutzer----------"<<"\n";
    std::cout<<"Vorname: "<<nBenutzer.sVorname<<"\n";
    std::cout<<"Nachname: "<<nBenutzer.sNachname<<"\n";
    std::cout<<"Geburtsjahr: "<<nBenutzer.iGeburtsjahr<<"\n";
    std::cout<<"Alter: "<<nBenutzer.iAlter<<"\n";

    std::cout<<"----------Einzeln_Kopie----------"<<"\n";
    std::cout<<"Vorname: "<<nKopieEinzeln.sVorname<<"\n";
    std::cout<<"Nachname: "<<nKopieEinzeln.sNachname<<"\n";
    std::cout<<"Geburtsjahr: "<<nKopieEinzeln.iGeburtsjahr<<"\n";
    std::cout<<"Alter: "<<nKopieEinzeln.iAlter<<"\n";

    std::cout<<"----------Gesamt_Kopie----------"<<"\n";
    std::cout<<"Vorname: "<<nKopieGesamt.sVorname<<"\n";
    std::cout<<"Nachname: "<<nKopieGesamt.sNachname<<"\n";
    std::cout<<"Geburtsjahr: "<<nKopieGesamt.iGeburtsjahr<<"\n";
    std::cout<<"Alter: "<<nKopieGesamt.iAlter<<"\n";




    return 0;
    
}
