/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QFormLayout *formLayout;
    QLineEdit *lineEdit_Name;
    QLabel *label_X_Coordiante;
    QLineEdit *lineEdit_X_Coord;
    QLabel *label_Y_Coordiante;
    QLineEdit *lineEdit_Y_Coord;
    QDialogButtonBox *buttonBox;
    QLabel *label_Name;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(400, 360);
        formLayout = new QFormLayout(Dialog);
        formLayout->setObjectName("formLayout");
        lineEdit_Name = new QLineEdit(Dialog);
        lineEdit_Name->setObjectName("lineEdit_Name");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, lineEdit_Name);

        label_X_Coordiante = new QLabel(Dialog);
        label_X_Coordiante->setObjectName("label_X_Coordiante");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_X_Coordiante);

        lineEdit_X_Coord = new QLineEdit(Dialog);
        lineEdit_X_Coord->setObjectName("lineEdit_X_Coord");
        lineEdit_X_Coord->setClearButtonEnabled(true);

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, lineEdit_X_Coord);

        label_Y_Coordiante = new QLabel(Dialog);
        label_Y_Coordiante->setObjectName("label_Y_Coordiante");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_Y_Coordiante);

        lineEdit_Y_Coord = new QLineEdit(Dialog);
        lineEdit_Y_Coord->setObjectName("lineEdit_Y_Coord");
        lineEdit_Y_Coord->setClearButtonEnabled(true);

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, lineEdit_Y_Coord);

        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, buttonBox);

        label_Name = new QLabel(Dialog);
        label_Name->setObjectName("label_Name");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_Name);


        retranslateUi(Dialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Dialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Dialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Add City", nullptr));
        label_X_Coordiante->setText(QCoreApplication::translate("Dialog", "x-Coordinate", nullptr));
        label_Y_Coordiante->setText(QCoreApplication::translate("Dialog", "y-Coordinate", nullptr));
        label_Name->setText(QCoreApplication::translate("Dialog", "Name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
