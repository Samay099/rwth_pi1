#include "externalmap.h"
#include "ui_externalmap.h"
#include<QFileDialog>

externalmap::externalmap(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::externalmap)
{
    ui->setupUi(this);
}

externalmap::~externalmap()
{
    delete ui;
}

QString externalmap::get_Path_City()
{
    return this->pathCity;
}

QString externalmap::get_Path_Street()
{
    return this->pathStreet;
}



void externalmap::on_pushButton_browser_city_clicked()
{
    this->pathCity = QFileDialog::getOpenFileName(this,"Open City Map","/home","txt files (*.txt)");
    ui->lineEdit_city->setText(pathCity);
}


void externalmap::on_pushButton_browser_street_clicked()
{
    this->pathStreet = QFileDialog::getOpenFileName(this,"Open Street Map","/home","txt files (*.txt)");
    ui->lineEdit_street->setText(pathStreet);
}

