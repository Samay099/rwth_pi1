#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include<QMainWindow>
#include<QMessageBox>
#include<QGraphicsView>
#include <QRandomGenerator>

#include "map.h"
#include"mapio.h"
#include"mapionrw.h"
#include "dialog.h"
#include"dijkstra.h"






QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_Teste_clicked();

    void on_actionExit_triggered();

    void on_actionClear_Scene_triggered();

    void on_actionAbout_triggered();

    void on_pushButton_DrawCity_clicked();


    void on_pushButton_Map_Draw_clicked();

    void on_pushButton_DrawStreet_clicked();

    void on_pushButton_addStreet_clicked();

    void on_checkBox_HideTest_clicked();

    void on_pushButton_AddCity_clicked();

    void on_pushButton_Fill_Map_clicked();

    void on_pushButton_ABstractMap_clicked();

    void on_pushButton_DijkstraTest_clicked();

    void on_pushButton_RouteSearch_clicked();

    void on_pushButton_AddStreet_clicked();

    void on_actionOpen_triggered();

private:
    Ui::MainWindow *ui;
    QGraphicsScene scene;
    Map map;
    MapIo* mapio;
};
#endif // MAINWINDOW_H
