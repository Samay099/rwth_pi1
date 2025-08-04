#ifndef STREET_H
#define STREET_H

#include<QGraphicsScene>
#include<QGraphicsItem>

#include"city.h"

class Street
{

    public:
        Street();

        /**
        * @brief Street
         * @param city1
         * @param city2
        */
        Street(City* city1,City* city2);

        /**
        * @brief drawRed
        * @param scene
        */
        void draw(QGraphicsScene& scene);

        /**
        * @brief drawRed
        * @param scene
        */
        void drawRed(QGraphicsScene& scene);

        /**
         * @brief getCity1
         * @return the Pointer on the first city of the street
         */
        City* getCity1() const;

        /**
        * @brief getCity2
         * @return the Pointer on the second city of the street
         */
        City* getCity2() const;

    private:
        City* city1;
        City* city2;



};

#endif // STREET_H
