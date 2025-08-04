#include "map.h"

Map::Map()
{}

void Map::addCity(City* city)
{
    qDebug() << city->get_name() <<"added";

    vectorCities.push_back(city);
}

bool Map::addStreet(Street* street)
{
    if(this->vectorCities.contains(street->getCity1()) && this->vectorCities.contains(street->getCity2()))
    {
        vectorStreet.push_back(street);
        return true;
    }
    else
    {
        return false;
    }

}

void Map::draw(QGraphicsScene& scene)
{
    QVector<City*>::Iterator itCity = this->vectorCities.begin();

    while(itCity != this->vectorCities.end())
    {
        (*itCity)->draw(scene);
        itCity++;
    }

    QVector<Street*>::iterator itStreet = this->vectorStreet.begin();

    while(itStreet != this->vectorStreet.end())
    {
        (*itStreet)->draw(scene);
        itStreet++;
    }

}

void Map::clear()
{
    this->vectorCities.clear();
    this->vectorStreet.clear();
}

City* Map::findCity(const QString cityName) const
{
    QVector<City*>::const_iterator it = this->vectorCities.begin();

    while(it != this->vectorCities.end())
    {
        if((cityName.compare((*it)->get_name())) == 0)
        {
            return *it;
        }
        it++;
    }
    return NULL;
}

QVector<Street*>  Map::getStreetList(const City* city) const
{
    QVector<Street*> vector;

    for (QVector<Street*>::const_iterator it = this->vectorStreet.begin();  it != this->vectorStreet.end(); ++it)
    {
        //using compare() to compare the given city with the member-cities of the iterated street
        if((city->get_name()).compare((*it)->getCity1()->get_name()) == 0 || (city->get_name()).compare((*it)->getCity2()->get_name()) == 0)
        {
            vector.push_back(*it);
        }
    }
    return vector;

}
City*Map:: getOppositeCity(const Street* street, const City* city) const
{
    if((street->getCity1()->get_name()).compare(city->get_name()) == 0)
    {
        return street->getCity2();
    }

    if((street->getCity2()->get_name()).compare(city->get_name()) == 0)
    {
        return street->getCity1();
    }

    return NULL;
}
double Map::getLength(const Street* street) const
{
    //simply using Pythagorean theorem
    double dBase = street->getCity1()->get_Coordinate_X() - street->getCity2()->get_Coordinate_X();
    double dHeight = street->getCity1()->get_Coordinate_Y() - street->getCity2()->get_Coordinate_Y();

    return sqrt(dBase*dBase + dHeight*dHeight);
}

