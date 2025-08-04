/********************************************************************************
** Form generated from reading UI file 'streetdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STREETDIALOG_H
#define UI_STREETDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_StreetDialog
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QLineEdit *lineEdit_City1;
    QLineEdit *lineEdit_City2;
    QLabel *label_City1;
    QLabel *label_City2;

    void setupUi(QDialog *StreetDialog)
    {
        if (StreetDialog->objectName().isEmpty())
            StreetDialog->setObjectName("StreetDialog");
        StreetDialog->resize(400, 300);
        gridLayout = new QGridLayout(StreetDialog);
        gridLayout->setObjectName("gridLayout");
        buttonBox = new QDialogButtonBox(StreetDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        gridLayout->addWidget(buttonBox, 2, 1, 1, 1);

        lineEdit_City1 = new QLineEdit(StreetDialog);
        lineEdit_City1->setObjectName("lineEdit_City1");

        gridLayout->addWidget(lineEdit_City1, 0, 1, 1, 1);

        lineEdit_City2 = new QLineEdit(StreetDialog);
        lineEdit_City2->setObjectName("lineEdit_City2");

        gridLayout->addWidget(lineEdit_City2, 1, 1, 1, 1);

        label_City1 = new QLabel(StreetDialog);
        label_City1->setObjectName("label_City1");

        gridLayout->addWidget(label_City1, 0, 0, 1, 1);

        label_City2 = new QLabel(StreetDialog);
        label_City2->setObjectName("label_City2");

        gridLayout->addWidget(label_City2, 1, 0, 1, 1);


        retranslateUi(StreetDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, StreetDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, StreetDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(StreetDialog);
    } // setupUi

    void retranslateUi(QDialog *StreetDialog)
    {
        StreetDialog->setWindowTitle(QCoreApplication::translate("StreetDialog", "Add Street", nullptr));
        label_City1->setText(QCoreApplication::translate("StreetDialog", "Start City", nullptr));
        label_City2->setText(QCoreApplication::translate("StreetDialog", "End City", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StreetDialog: public Ui_StreetDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STREETDIALOG_H
