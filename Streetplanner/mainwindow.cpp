#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "city.h"
#include"street.h"
#include"dialog.h"
#include"streetdialog.h"
#include"externalmap.h"
#include"mapiofileinput.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),
    mapio(new MapIoNrw())
{
    ui->setupUi(this);
    ui->graphicsView->setScene(&scene);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Teste_clicked()
{
    qDebug()<< "Button clicked\n";
    QString eingabe = ui->lineEdit_Eingabe->text();


    if(eingabe.toInt())
    {
        int iNo = eingabe.toInt();
        qDebug()<<"Ihr Eingabe ist eine Zahl lautet nach Addition mit 4: %1. "<< iNo+4;
    }
    else
    {
        qDebug()<<"Ihr Eingabe lautet :: "<<eingabe;
    }

    QMessageBox msgBox;
    msgBox.setText(eingabe);
    msgBox.exec();

    int posX = QRandomGenerator::global()->bounded(1000);
    int posY = QRandomGenerator::global()->bounded(1000);

    scene.addRect(posX,posY,50,50,QPen(Qt::red), QBrush(Qt::red, Qt::SolidPattern));
}


void MainWindow::on_actionExit_triggered()
{
    close();
}


void MainWindow::on_actionClear_Scene_triggered()
{
    scene.clear();
}


void MainWindow::on_actionAbout_triggered()
{
    QMessageBox about;
    about.about(this,"About Streetplanner", "Streeteplanner V9");
}


void MainWindow::on_pushButton_DrawCity_clicked()
{
    City city1("City1",10,20);
    City city2("City2",30,40);

    city1.draw(scene);
    city2.draw(scene);

}




void MainWindow::on_pushButton_Map_Draw_clicked()
{
    City c1("city c1", 20,50);
    map.addCity(&c1);
    map.draw(scene);
}


void MainWindow::on_pushButton_DrawStreet_clicked()
{
    City city1("City1",10,20);
    City city2("City2",100,40);

    Street street1(&city1,&city2);
    street1.draw(scene);

}


void MainWindow::on_pushButton_addStreet_clicked()
{
    City city1("city1",10,20);
    City city2("city2",100,200);
    City city3("city3",50,100);

    map.addCity(&city1);
    map.addCity(&city2);


    Street street1(&city1,&city2);

    if(map.addStreet(&street1))
    {
        qDebug()<<"city1-city2 added\n";
    }
    else
    {
        qDebug()<<"city1-city2 not added\n";
    }

    Street street2(&city2,&city3);

    if(map.addStreet(&street2))
    {
        qDebug()<<"city2-city3 added\n";
    }
    else
    {
        qDebug()<<"city2-city3 not added\n";
    }

    Street street3(&city1,&city3);

    if(map.addStreet(&street3))
    {
        qDebug()<<"city1-city3 added\n";
    }
    else
    {
        qDebug()<<"city1-city3 not added\n";
    }

}


void MainWindow::on_checkBox_HideTest_clicked()
{
    if(ui->checkBox_HideTest->isChecked())
    {
        ui->pushButton_Teste->hide();
        ui->pushButton_DrawCity->hide();
        ui->pushButton_Map_Draw->hide();
        ui->pushButton_DrawStreet->hide();
        ui->pushButton_addStreet->hide();
        ui->pushButton_ABstractMap->hide();
        ui->pushButton_DijkstraTest->hide();

    }
    else
    {
        ui->pushButton_Teste->show();
        ui->pushButton_DrawCity->show();
        ui->pushButton_Map_Draw->show();
        ui->pushButton_DrawStreet->show();
        ui->pushButton_addStreet->show();
        ui->pushButton_ABstractMap->show();
        ui->pushButton_DijkstraTest->show();
    }
}


void MainWindow::on_pushButton_AddCity_clicked()
{
    Dialog* newCityDialog = new Dialog();
    newCityDialog->exec();

    if(newCityDialog->result())
    {
        City* newCity = newCityDialog->newCity();
        map.addCity(newCity);
        scene.clear();
        map.draw(scene);
    }

    delete newCityDialog;
}


void MainWindow::on_pushButton_Fill_Map_clicked()
{
    map.clear();
    mapio->fillMap(map);
    scene.clear();
    map.draw(scene);
}


void MainWindow::on_pushButton_ABstractMap_clicked()
{
        Map testMap;
        City *a = new City("a", 0, 0);
        City *b = new City("b", 0, 100);
        City *c = new City("c", 100, 300);
        Street *s = new Street(a, b);
        Street *s2 = new Street(b, c);


        qDebug() << "MapTest: Start Test of the Map";
        {
            qDebug() << "MapTest: adding wrong street";
            bool t1 = testMap.addStreet(s);
            if (t1) {
                qDebug() << "-Error: Street should not bee added, if cities have not been added.";
            }
        }

        {
            qDebug() << "MapTest: adding correct street";
            testMap.addCity(a);
            testMap.addCity(b);
            bool t1 = testMap.addStreet(s);
            if (!t1) {
                qDebug() << "-Error: It should be possible to add this street.";
            }
        }

        {
            qDebug() << "MapTest: findCity";
            City* city = testMap.findCity("a");
            if (city != a)
                qDebug() << "-Error: City a could not be found.";

            city = testMap.findCity("b");
            if (city != b)
                qDebug() << "-Error: City b could not be found.";

            city = testMap.findCity("c");
            if (city != nullptr)
                qDebug() << "-Error: If city could not be found 0 should be returned.";
        }

        testMap.addCity(c);
        testMap.addStreet(s2);

        {
            qDebug() << "MapTest: getOppositeCity";
            const City *city = testMap.getOppositeCity(s, a);
            if (city != b)
                qDebug() << "-Error: Opposite city should be b.";

            city = map.getOppositeCity(s, c);
            if (city != nullptr)
                qDebug() << "-Error: Opposite city for a city which is not linked by given street should be 0.";
        }

        {
            qDebug() << "MapTest: streetLength";
            double l = testMap.getLength(s2);
            double expectedLength = 223.6;
            // compare doubles with 5% tolerance
            if (l < expectedLength * 0.95 || l > expectedLength *1.05)
                qDebug() << "-Error: Street Length is not equal to the expected.";

        }

        {
            qDebug() << "MapTest: getStreetList";
            QVector<Street*> streetList1 = testMap.getStreetList(a);
            QVector<Street*> streetList2 = testMap.getStreetList(b);
            if (streetList1.size() != 1) {
                qDebug() << "-Error: One street should be found for city a.";
            }
            else if (*streetList1.begin() != s) {
                qDebug() << "-Error: The wrong street has been found for city a.";
            }

            if (streetList2.size() != 2)
                qDebug() << "-Error: Two streets should be found for city b.";
        }

        qDebug() << "MapTest: End Test of the Map.";

}


void MainWindow::on_pushButton_DijkstraTest_clicked()
{
    QVector<Street*> Path = Dijkstra::search(map,"Bonn","Aachen");
    QVector<Street*>::iterator it = Path.begin();

    while(it != Path.end())
    {
        (*it)->drawRed(scene);
        it++;
    }

}


void MainWindow::on_pushButton_RouteSearch_clicked()
{
    QVector<Street*> Path = Dijkstra::search(map,ui->lineEdit_Start->text(),ui->lineEdit_Dest->text());
    QVector<Street*>::iterator it = Path.begin();

    while(it != Path.end())
    {
        (*it)->drawRed(scene);
        it++;
    }
}


void MainWindow::on_pushButton_AddStreet_clicked()
{
    StreetDialog* newStreetDialog = new StreetDialog();
    newStreetDialog->exec();

    if(newStreetDialog->result())
    {
        Street* newStreet = newStreetDialog->createStreet(map);
        map.addStreet(newStreet);
        scene.clear();
        map.draw(scene);
    }
}


void MainWindow::on_actionOpen_triggered()
{
    externalmap* ExternalMap = new externalmap();
    ExternalMap->exec();

    if(ExternalMap->result())
    {
        mapio = new MapIoFileinput(ExternalMap->get_Path_City(),ExternalMap->get_Path_Street());
        mapio->fillMap(map);
    }

}

