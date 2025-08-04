//////////////////////////////////////////////////////////////////////////////
// Praktikum Informatik 1 MMXXV
//////////////////////////////////////////////////////////////////////////////

#include "Liste.h"

/**
 * @brief Standardkonstruktor, der eine leere Liste erstellt
 */
Liste::Liste(): front(nullptr), back(nullptr)
{
}

/**
 * @brief Hinzufuegen eines neuen Listenelements am Ende der Liste.
 *
 * @param pData Zeiger auf ein Objekt der Klasse Student
 * @return void
 */
void Liste::pushBack(Student pData)
{
    ListenElement* neuesElement = new ListenElement(pData, nullptr,nullptr);

    if (front == nullptr)                                       // Liste leer?
    {
        front = neuesElement;
        back = neuesElement;
    }
    else
    {
        back->setNext(neuesElement);
        neuesElement->setPrevious(back);

        back = neuesElement;
    }
}

/**
 * @brief Hinzufuegen eines neuen Listenelements am Anfang der Liste.
 *
 * @param pData Zeiger auf ein Objekt der Klasse Student
 * @return void
 */
void Liste::pushFront(Student pData)
{
    ListenElement* neuesElement = new ListenElement(pData, nullptr,nullptr);

    if (front == nullptr)                                       // Liste leer?
    {
        front = neuesElement;
        back = neuesElement;
    }
    else
    {
        front->setPrevious(neuesElement);
        neuesElement->setNext(front);

        front = neuesElement;
    }
}


/**
 * @brief Entfernen eines Listenelements am Anfang der Liste.
 *
 * @return void
 */
void Liste::popFront()
{
    ListenElement* cursor = front;

    if (front == back)                                       // Liste enth�lt nur ein Listenelement
    {
        delete front;                                        // Listenelement l�schen
        front = nullptr;
        back = nullptr;
    }
    else
    {
        front = front->getNext();
        front->setPrevious(nullptr);
        delete cursor;
    }
}

/**
 * @brief Pruefen, ob die Liste leer ist
 *
 * @return wenn leer true, sonst false
 */
bool Liste::empty()
{
    if(front == nullptr)
    {
        return true;
    }
    return false;
}

/**
 * @brief Gibt die Daten des ersten Listenelements in der Liste zurueck
 *
 * @return Zeiger auf ein Objekt der Klasse Student
 */
Student Liste::dataFront()
{
    return front->getData();
}

/**
 * @brief Ausgabe der Student mit der angegebenen Matrikelnummer
 * @param matNr Die Matrikelnummber des Studenten
 * @return void
 */
Student Liste::getStudent(unsigned int matNr)
{
    ListenElement* cursor = front;

    while (cursor != nullptr)
    {
        if(cursor->getData().getMatNr() == matNr)
        {
            return cursor->getData();
        }
        cursor = cursor->getNext();
    }
    return Student();
}


/**
 * @brief Ausgabe der Liste vom ersten bis zum letzten Element.
 *
 * @return void
 */
void Liste::ausgabeVorwaerts() const
{
    ListenElement* cursor = front;

    while (cursor != nullptr)
    {
        
    	cursor->getData().ausgabe();
        cursor = cursor->getNext();
    }
}

/**
 * @brief Ausgabe der Liste vom ersten bis zum letzten Element.
 *
 * @return void
 */
void Liste::ausgabeRueckwaerts() const
{
    ListenElement* cursor = back;

    while (cursor != nullptr)
    {
    	cursor->getData().ausgabe();
        cursor = cursor->getPrevious();
    }
}

/**
 * @brief Funktion, die einen Studenten aus der Liste mithilfe der Matrikelnummer löscht
 * @param matNr Matrikelnummer des Studenten
 */
void Liste::deleteStudent(unsigned int matNr)
{
    ListenElement* cursor = front;

    while(cursor != nullptr)
    {
        if(cursor->getData().getMatNr() == matNr)
        {
            if(cursor == front && cursor == back)
            {
                front = nullptr;
                back = nullptr;
            }
            else if(cursor == front)
            {
                // vorheriges Element von naechsten Element zu nullptr setzen
                front->getNext()->setPrevious(nullptr);

                //front zu naechsten Element setzen
                front = front->getNext();
            }
            else if( cursor == back)
            {
                // naechsten Element von vorheriges Element zu nullptr setzen
                back->getPrevious()->setNext(nullptr);

                //back zu vorheriges Element setzen
                back = back->getPrevious();
            }
            else
            {
                //Bei vorherigem Element das nächste Element zum nächsten Element des cursor setzen
                cursor->getPrevious()->setNext(cursor->getNext());

                //Bei nächste Element das vorherigem Element zum vorherigem Element des cursor setzen
                cursor->getNext()->setPrevious(cursor->getPrevious());
            }

            delete cursor;
        }
        cursor = cursor->getNext();
    }
}
