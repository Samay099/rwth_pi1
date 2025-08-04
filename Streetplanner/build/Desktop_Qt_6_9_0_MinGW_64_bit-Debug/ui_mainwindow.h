/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionExit;
    QAction *actionClear_Scene;
    QAction *actionAbout;
    QWidget *centralwidget;
    QGridLayout *lable_eingabe;
    QLineEdit *lineEdit_Dest;
    QPushButton *pushButton_DrawStreet;
    QPushButton *pushButton_addStreet;
    QPushButton *pushButton_RouteSearch;
    QPushButton *pushButton_ABstractMap;
    QPushButton *pushButton_AddStreet;
    QPushButton *pushButton_Fill_Map;
    QPushButton *pushButton_DrawCity;
    QLineEdit *lineEdit_Eingabe;
    QPushButton *pushButton_AddCity;
    QPushButton *pushButton_Map_Draw;
    QCheckBox *checkBox_HideTest;
    QPushButton *pushButton_DijkstraTest;
    QPushButton *pushButton_Teste;
    QGraphicsView *graphicsView;
    QLineEdit *lineEdit_Start;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuMen;
    QMenu *menuInfo;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 648);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName("actionOpen");
        actionOpen->setEnabled(true);
        actionOpen->setVisible(true);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName("actionSave");
        actionSave->setEnabled(false);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        actionClear_Scene = new QAction(MainWindow);
        actionClear_Scene->setObjectName("actionClear_Scene");
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName("actionAbout");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        lable_eingabe = new QGridLayout(centralwidget);
        lable_eingabe->setObjectName("lable_eingabe");
        lable_eingabe->setVerticalSpacing(8);
        lineEdit_Dest = new QLineEdit(centralwidget);
        lineEdit_Dest->setObjectName("lineEdit_Dest");
        lineEdit_Dest->setClearButtonEnabled(true);

        lable_eingabe->addWidget(lineEdit_Dest, 17, 0, 1, 1, Qt::AlignmentFlag::AlignLeft);

        pushButton_DrawStreet = new QPushButton(centralwidget);
        pushButton_DrawStreet->setObjectName("pushButton_DrawStreet");

        lable_eingabe->addWidget(pushButton_DrawStreet, 7, 0, 1, 1);

        pushButton_addStreet = new QPushButton(centralwidget);
        pushButton_addStreet->setObjectName("pushButton_addStreet");

        lable_eingabe->addWidget(pushButton_addStreet, 8, 0, 1, 1);

        pushButton_RouteSearch = new QPushButton(centralwidget);
        pushButton_RouteSearch->setObjectName("pushButton_RouteSearch");

        lable_eingabe->addWidget(pushButton_RouteSearch, 15, 0, 1, 1);

        pushButton_ABstractMap = new QPushButton(centralwidget);
        pushButton_ABstractMap->setObjectName("pushButton_ABstractMap");

        lable_eingabe->addWidget(pushButton_ABstractMap, 9, 0, 1, 1);

        pushButton_AddStreet = new QPushButton(centralwidget);
        pushButton_AddStreet->setObjectName("pushButton_AddStreet");

        lable_eingabe->addWidget(pushButton_AddStreet, 13, 0, 1, 1);

        pushButton_Fill_Map = new QPushButton(centralwidget);
        pushButton_Fill_Map->setObjectName("pushButton_Fill_Map");

        lable_eingabe->addWidget(pushButton_Fill_Map, 14, 0, 1, 1);

        pushButton_DrawCity = new QPushButton(centralwidget);
        pushButton_DrawCity->setObjectName("pushButton_DrawCity");

        lable_eingabe->addWidget(pushButton_DrawCity, 4, 0, 1, 1);

        lineEdit_Eingabe = new QLineEdit(centralwidget);
        lineEdit_Eingabe->setObjectName("lineEdit_Eingabe");
        lineEdit_Eingabe->setClearButtonEnabled(true);

        lable_eingabe->addWidget(lineEdit_Eingabe, 1, 0, 1, 1, Qt::AlignmentFlag::AlignLeft);

        pushButton_AddCity = new QPushButton(centralwidget);
        pushButton_AddCity->setObjectName("pushButton_AddCity");

        lable_eingabe->addWidget(pushButton_AddCity, 12, 0, 1, 1);

        pushButton_Map_Draw = new QPushButton(centralwidget);
        pushButton_Map_Draw->setObjectName("pushButton_Map_Draw");

        lable_eingabe->addWidget(pushButton_Map_Draw, 6, 0, 1, 1);

        checkBox_HideTest = new QCheckBox(centralwidget);
        checkBox_HideTest->setObjectName("checkBox_HideTest");

        lable_eingabe->addWidget(checkBox_HideTest, 11, 0, 1, 1);

        pushButton_DijkstraTest = new QPushButton(centralwidget);
        pushButton_DijkstraTest->setObjectName("pushButton_DijkstraTest");

        lable_eingabe->addWidget(pushButton_DijkstraTest, 10, 0, 1, 1);

        pushButton_Teste = new QPushButton(centralwidget);
        pushButton_Teste->setObjectName("pushButton_Teste");
        pushButton_Teste->setMaximumSize(QSize(128, 28));

        lable_eingabe->addWidget(pushButton_Teste, 3, 0, 1, 1);

        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName("graphicsView");

        lable_eingabe->addWidget(graphicsView, 1, 2, 19, 1);

        lineEdit_Start = new QLineEdit(centralwidget);
        lineEdit_Start->setObjectName("lineEdit_Start");
        lineEdit_Start->setClearButtonEnabled(true);

        lable_eingabe->addWidget(lineEdit_Start, 16, 0, 1, 1, Qt::AlignmentFlag::AlignLeft);

        verticalSpacer = new QSpacerItem(20, 424, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        lable_eingabe->addItem(verticalSpacer, 18, 0, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName("label");

        lable_eingabe->addWidget(label, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuMen = new QMenu(menubar);
        menuMen->setObjectName("menuMen");
        menuInfo = new QMenu(menubar);
        menuInfo->setObjectName("menuInfo");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuMen->menuAction());
        menubar->addAction(menuInfo->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionExit);
        menuMen->addAction(actionClear_Scene);
        menuInfo->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Streetplanner", nullptr));
#if QT_CONFIG(tooltip)
        MainWindow->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
#if QT_CONFIG(shortcut)
        actionExit->setShortcut(QCoreApplication::translate("MainWindow", "Alt+E", nullptr));
#endif // QT_CONFIG(shortcut)
        actionClear_Scene->setText(QCoreApplication::translate("MainWindow", "Clear Scene", nullptr));
#if QT_CONFIG(shortcut)
        actionClear_Scene->setShortcut(QCoreApplication::translate("MainWindow", "Alt+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        lineEdit_Dest->setPlaceholderText(QCoreApplication::translate("MainWindow", "Destination", nullptr));
        pushButton_DrawStreet->setText(QCoreApplication::translate("MainWindow", "Test Street Draw", nullptr));
        pushButton_addStreet->setText(QCoreApplication::translate("MainWindow", "Test Add Street", nullptr));
        pushButton_RouteSearch->setText(QCoreApplication::translate("MainWindow", "Search Route", nullptr));
        pushButton_ABstractMap->setText(QCoreApplication::translate("MainWindow", "Test Abstract Map", nullptr));
        pushButton_AddStreet->setText(QCoreApplication::translate("MainWindow", "Add Street", nullptr));
        pushButton_Fill_Map->setText(QCoreApplication::translate("MainWindow", "Fill Map", nullptr));
        pushButton_DrawCity->setText(QCoreApplication::translate("MainWindow", "Test Draw City", nullptr));
        lineEdit_Eingabe->setPlaceholderText(QCoreApplication::translate("MainWindow", "Ihre Eingabe", nullptr));
        pushButton_AddCity->setText(QCoreApplication::translate("MainWindow", "Add City", nullptr));
        pushButton_Map_Draw->setText(QCoreApplication::translate("MainWindow", "Test Map Draw", nullptr));
        checkBox_HideTest->setText(QCoreApplication::translate("MainWindow", "Hide Test", nullptr));
        pushButton_DijkstraTest->setText(QCoreApplication::translate("MainWindow", "Test Dijkstra", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_Teste->setToolTip(QCoreApplication::translate("MainWindow", "Testet", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_Teste->setText(QCoreApplication::translate("MainWindow", "Teste", nullptr));
#if QT_CONFIG(tooltip)
        graphicsView->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        lineEdit_Start->setText(QString());
        lineEdit_Start->setPlaceholderText(QCoreApplication::translate("MainWindow", "Start Location", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Eingabe", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuMen->setTitle(QCoreApplication::translate("MainWindow", "Scene", nullptr));
        menuInfo->setTitle(QCoreApplication::translate("MainWindow", "Info", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
