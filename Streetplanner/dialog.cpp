#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}


City* Dialog::newCity()
{
    QString Name = ui->lineEdit_Name->text();
    int X = QString(ui->lineEdit_X_Coord->text()).toInt();
    int Y = QString(ui->lineEdit_X_Coord->text()).toInt();

    qDebug() << " Name der Stadt: " << Name;
    qDebug() << "Koordinaten der Stadt : ("<< X << ", " << Y <<")";

    City* newCity = new City(Name,X,Y);

    return newCity;
}
