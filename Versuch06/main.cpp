/** @mainpage
 *
 * Praktikum Informatik 1 MMXXV <BR>
 * Versuch 5: Dynamische Datenstrukturen
 *
 */

#include <iostream>
#include <string>
#include<vector>
#include<fstream>
#include "Student.h"

void pushBack(std::vector<Student>& studentenVector, Student student)
{
    printf("3\n");
    student.ausgabe();
    studentenVector.push_back(student);
    printf("4\n");
}

void pushFront(std::vector<Student>& studentenVector, Student student)
{
    studentenVector.insert(studentenVector.begin() ,student);
}

void popFront(std::vector<Student>& studentenVector)
{
    studentenVector.erase(studentenVector.begin());
}

bool empty(std::vector<Student>& studentenVector)
{
    return studentenVector.empty();
}

void deleteStudent(std::vector<Student> studentenVector, unsigned int matNr)
{
    std::vector<Student>::iterator studentIt = studentenVector.begin();


    do
    {
        if(studentIt->getMatNr() == matNr)
        {
            studentenVector.erase(studentIt);
        }
        studentIt++;
    }while(studentIt != studentenVector.end());
}

Student getStudent(std::vector<Student> studentenVector, unsigned int matNr)
{
    std::vector<Student>::iterator studentIt = studentenVector.begin();

    while(studentIt != studentenVector.end())
    {
        if(studentIt->getMatNr() == matNr)
        {
            return *studentIt;
        }
        studentIt++;
    }

    return Student(0,"","","");
}

void ausgabeVorwaerts(const std::vector<Student>& studentenVector) 
{
    std::vector<Student>::const_iterator studentIt = studentenVector.begin();

    while(studentIt != studentenVector.end())
    {
        studentIt->ausgabe();
        studentIt++;
    }
}

void ausgabeRueckwaerts(const std::vector<Student>& studentenVector) 
{
    std::vector<Student>::const_reverse_iterator studentrevIt = studentenVector.rbegin();

    while(studentrevIt != studentenVector.rend())
    {
        studentrevIt->ausgabe();
        studentrevIt++;
    }
}

std::vector<Student>read_File(std::string sFilename)
{
    std::vector<Student> studentenVector;

    std::ifstream eingabe(sFilename);

    if(!eingabe)
    {
        std :: cout << " Fehler beim Oeffnen der Datei ! "<<"\n";
        exit (1) ; 
    }

    if(eingabe.is_open())
    {
        unsigned int matNr = 0;
        
       
        std::string sName;
        std::string sGeburtstag;
        std::string sAdresse;

        eingabe >> matNr;
        while(!eingabe.eof())
        {
            eingabe.ignore(1,'\n');

            std::getline(eingabe,sName);
            std::getline(eingabe,sGeburtstag);
            std::getline(eingabe,sAdresse);

            Student student(matNr,sName,sGeburtstag,sAdresse);
            studentenVector.push_back(student);
            
            eingabe >> matNr;
        }

    }

    eingabe.close();

    return studentenVector;
}



void write_File(std::string sFilename, std::vector<Student> studentenVector)
{
    std::ofstream ausgabe;
    ausgabe.open(sFilename, std::ios::out | std::ios::trunc);

    if(!ausgabe)
    {
        std :: cout << " Fehler beim Oeffnen der Datei ! "<<"\n";
        exit (1) ; 
    }

    std::vector<Student>::iterator studentIt = studentenVector.begin();

    while(studentIt != studentenVector.end())
    {
        ausgabe<<studentIt->getMatNr()<<std::endl;
        ausgabe<<studentIt->getName()<<std::endl;
        ausgabe<<studentIt->getGeburtstag()<<std::endl;
        ausgabe<<studentIt->getAdresse()<<std::endl;
        studentIt++;
    }

    ausgabe.close();
}


int main()
{
    std::vector<Student> studentenVector;
    Student student;

    char abfrage = 'j';
    std::cout << "Wollen Sie die Liste selbst fuellen? (j)/(n) ";
    std::cin >> abfrage;
    std::cin.ignore(10, '\n');

    if (abfrage != 'j')
    {
        student = Student(34567, "Harro Simoneit", "19.06.1971", "Am Markt 1");
        studentenVector.push_back(student);
        student = Student(74567, "Vera Schmitt", "23.07.1982", "Gartenstr. 23");
        studentenVector.push_back(student);
        student = Student(12345, "Siggi Baumeister", "23.04.1983", "Ahornst.55");
        studentenVector.push_back(student);
        student = Student(64567, "Paula Peters", "9.01.1981", "Weidenweg 12");
        studentenVector.push_back(student);
        student = Student(23456, "Walter Rodenstock", "15.10.1963", "W�llnerstr.9");
        studentenVector.push_back(student);
    }

    do
    {
            std::cout << "\nMenue:" << std::endl
                  << "-----------------------------" << std::endl
                  << "(1): Datenelement hinten hinzufuegen" << std::endl
                  << "(2): Datenelement vorne entfernen" << std::endl
                  << "(3): Datenbank ausgeben" << std::endl
                  << "(4): Datenbank in umgekehrter Reihenfolge ausgeben" << std::endl
                  << "(5): Datenelement Loeschen" << std::endl
                  << "(6): Datenelement vorne hinzufuegen" << std::endl
                  << "(7): Daten aus einer Datei einlesen" << std::endl
                  << "(8): Daten in eine Datei sichern" << std::endl
                  << "(0): Beenden" << std::endl;
        std::cin >> abfrage;
        std::cin.ignore(10, '\n');

        switch (abfrage)
        {
            // Datenelement hinten hinzufuegen
            case '1':
                if(!studentenVector.empty())    
                {
                    unsigned int matNr = 0;
                    std::string name = "";
                    std::string geburtstag = "";
                    std::string adresse = "";

                    std::cout << "Bitte geben sie die Daten f�r den Studenten ein.\nName: ";
                    getline(std::cin, name);    // ganze Zeile einlesen inklusive aller Leerzeichen

                    std::cout << "Geburtsdatum: ";
                    getline(std::cin, geburtstag);

                    std::cout << "Adresse: ";
                    getline(std::cin, adresse);

                    std::cout << "Matrikelnummer: ";
                    std::cin >> matNr;
                    std::cin.ignore(10, '\n');

                    student = Student(matNr, name, geburtstag, adresse);


                    pushBack(studentenVector, student);  

                }
                break;

            // Datenelement vorne entfernen
            case '2':
                    if(!studentenVector.empty())
                    {
                        student = studentenVector.front();
                        std::cout << "Der folgende Student ist geloescht worden:" << std::endl;
                        student.ausgabe();
                        popFront(studentenVector);
                    }
                    else
                    {
                        std::cout << "Die Liste ist leer!\n";
                    }
                
                break;

            // Datenbank vorwaerts ausgeben
            case '3':
                if(!studentenVector.empty())
                {
                    std::cout << "Inhalt der Liste in fortlaufender Reihenfolge:" << std::endl;
                    ausgabeVorwaerts(studentenVector);
                }
                else
                {
                    std::cout << "Die Liste ist leer!\n\n";
                }
                break;

            

            // Datenbank rueckwaerts ausgeben
            case '4':
                if(!studentenVector.empty())
                {
                    std::cout << "Inhalt der Liste in fortlaufender Reihenfolge:" << std::endl;
                    ausgabeRueckwaerts(studentenVector);
                }
                else
                {
                    std::cout << "Die Liste ist leer!\n\n";
                }
                break;

            
            case '5':
                if(!studentenVector.empty())
                {
                    unsigned int matrikelnummer = 0;
					std::cout << "Bitte gebe die Matrikelnummer des Studenten ein:" << std::endl;
					std::cin >> matrikelnummer;
					std::cin.ignore(10, '\n');

					student = getStudent(studentenVector ,matrikelnummer);
					if(student.getMatNr() != 0) {
						std::cout << "Der folgende Student ist geloescht worden:" << std::endl;
						student.ausgabe();
						deleteStudent(studentenVector,matrikelnummer);
					} else {
						std::cout << "Der Student mit der Matrikelnummer " << matrikelnummer << " ist nicht in der Liste." << std::endl;
					}
				}
				else
				{
					std::cout << "Die Liste ist leer!\n\n";
				}
            	break;
                

            // Datenelement vorne hinzufuegen
            case '6':
                 if(!studentenVector.empty())    
                {
                    unsigned int matNr = 0;
                    std::string name = "";
                    std::string geburtstag = "";
                    std::string adresse = "";

                    std::cout << "Bitte geben sie die Daten f�r den Studenten ein.\nName: ";
                    getline(std::cin, name);    // ganze Zeile einlesen inklusive aller Leerzeichen

                    std::cout << "Geburtsdatum: ";
                    getline(std::cin, geburtstag);

                    std::cout << "Adresse: ";
                    getline(std::cin, adresse);

                    std::cout << "Matrikelnummer: ";
                    std::cin >> matNr;
                    std::cin.ignore(10, '\n');

                    student = Student(matNr, name, geburtstag, adresse);

                    pushFront(studentenVector ,student);
                }
                break;
            
            case '7':
                {
                    std::string sFilename;
					std::cout
						<< "Bitte geben Sie den Namen der Datei ein, die Sie einlesen wollen." << std::endl;

					std::cin >> sFilename;
					std::cin.ignore(10, '\n');
                    

                    studentenVector.clear();
					studentenVector = read_File(sFilename);
                    printf("0\n");
                }
					break;   
            case '8':
                if(!studentenVector.empty())
                {
                    std::string sFilename;
                    std::cout
                        << "Bitte geben Sie den Namen der Datei ein, die Sie sichern wollen." << std::endl;

                    std::cin >> sFilename;
                    std::cin.ignore(10, '\n');
                    
                    write_File(sFilename,studentenVector);
                }
                break;
            case '0':
                std::cout << "Das Programm wird nun beendet";
                break;

            default :
                std::cout << "Falsche Eingabe, bitte nochmal";
                break;
        }
    }
    while (abfrage != '0');

    return 0;
}
