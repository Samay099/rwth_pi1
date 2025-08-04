#ifndef CITY_H
#define CITY_H

#include<QString>
#include<QDebug>
#include<QGraphicsScene>
#include<QGraphicsTextItem>

class City
{
    public:

        /**
        * @brief Constructs a City object with a given name and coordinates.
        * @param name The name of the city.
        * @param x The X-coordinate of the city.
        * @param y The Y-coordinate of the city.
        */
        City(QString name, int x, int y);

        /**
        * @brief Draws the city.
        * @param scene The QGraphicsScene object to draw upon.
        */
        void draw(QGraphicsScene& scene);

        /**
        * @brief Retrieves the name of the city.
        * @return The name of the city as a QString.
        */
        QString get_name() const;

        /**
        * @brief Retrieves the X-coordinate of the city.
        * @return The X-coordinate as an integer.
        */
        int get_Coordinate_X();
        /**
        * @brief Retrieves the Y-coordinate of the city.
        * @return The Y-coordinate as an integer.
        */
        int get_Coordinate_Y();

    private:
        QString name;
        int Coordinate_X;
        int Coordinate_Y;

};

#endif // CITY_H
