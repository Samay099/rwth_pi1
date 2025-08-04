
#include "streetdialog.h"
#include "ui_streetdialog.h"

StreetDialog::StreetDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::StreetDialog)
{
    ui->setupUi(this);
}

StreetDialog::~StreetDialog()
{
    delete ui;
}

Street* StreetDialog::createStreet(Map &map)
{
    QString city_start = ui->lineEdit_City1->text();
    QString city_end = ui->lineEdit_City2->text();

    qDebug()<<"Start City: "<<city_start<<"\n";
    qDebug()<<"End City: "<<city_end<<"\n";

    City* city_start_ptr = map.findCity(city_start);
    City* city_end_ptr = map.findCity(city_end);

    Street* newStreet = new Street(city_start_ptr,city_end_ptr);

    return newStreet;
}
