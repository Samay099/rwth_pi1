#include "city.h"

City::City(QString name, int x, int y): name(name),Coordinate_X(x),Coordinate_Y(y)
{

}
void City::draw(QGraphicsScene& scene)
{
    scene.addEllipse(this->Coordinate_X, this->Coordinate_Y,4,4,QPen(Qt::red), QBrush(Qt::red, Qt::SolidPattern));

    QGraphicsTextItem* cityName = new QGraphicsTextItem;
    cityName->setPos(this->Coordinate_X,this->Coordinate_Y) ; // P o s i t i o n des Textes
    cityName->setPlainText(this->name) ; // Text
    scene.addItem(cityName) ;

    qDebug()<<"City Drawn: "<<this->name;
}

QString City::get_name() const
{
     return this->name;
}

int City::get_Coordinate_X()
{
    return this->Coordinate_X;
}
int City::get_Coordinate_Y()
{
    return this->Coordinate_Y;
}


