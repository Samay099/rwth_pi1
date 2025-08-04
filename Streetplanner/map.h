#ifndef MAP_H
#define MAP_H

#include<QVector>
#include<QGraphicsScene>

#include"city.h"
#include"street.h"
#include"abstractmap.h"



class Map : public AbstractMap
{
public:
    Map();

    /**
    * @brief Adds a city to the map.
    * @param city A pointer to the City object to be added.
     */
    void addCity(City* city);

    /**
     * @brief Adds a street to the map.
     * @param street A pointer to the Street object to be added.
     * @return True if the street was successfully added, false otherwise
     */
    bool addStreet(Street* street);

    /**
     * @brief Draws all cities in the map.
     * @param scene The QGraphicsScene object to draw upon.
     */
    void draw(QGraphicsScene& scene);


    void clear();

    /**
     * @brief Search for a city in this map by given name.
     * @param name
     * @return the city pointer, if city not found nullptr
     */
    City* findCity(const QString cityName) const ;

    /**
     * @brief Search for streets in this map.
     * @param city where you want the street_list from
     * @return A list of all streets in this map connected to provided city.
     */
    QVector<Street*> getStreetList(const City* city) const;

    /**
     * @brief Look for opposite city.
     * @param street
     * @param city
     * @return Opposite city of the street. If city has no connection to street returns nullptr.
     */
   City* getOppositeCity(const Street* street, const City* city) const;

    /**
     * @brief Calculate the street length.
     * @param street
     * @return Length of the street
     */
    double getLength(const Street* street) const;

private:
    QVector<City*> vectorCities;
    QVector<Street*> vectorStreet;
};

#endif // MAP_H
