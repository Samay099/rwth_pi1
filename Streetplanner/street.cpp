#include "street.h"


Street::Street(City* city1,City* city2) : city1(city1),city2(city2)
{

}
void Street::draw(QGraphicsScene& scene)
{

    QPen pen;
    pen.setWidth(2);
    pen.setColor(Qt::blue);
    scene.addLine(this->city1->get_Coordinate_X(),this->city1->get_Coordinate_Y(),this->city2->get_Coordinate_X(),this->city2->get_Coordinate_Y(),pen);
}

void Street::drawRed(QGraphicsScene& scene)
{
    QPen pen;
    pen.setWidth(5);
    pen.setColor(Qt::red);
    scene.addLine(this->city1->get_Coordinate_X(),this->city1->get_Coordinate_Y(),this->city2->get_Coordinate_X(),this->city2->get_Coordinate_Y(),pen);

}


City* Street::getCity1() const
{
    return this->city1;
}
City* Street::getCity2() const
{
    return this->city2;
}
