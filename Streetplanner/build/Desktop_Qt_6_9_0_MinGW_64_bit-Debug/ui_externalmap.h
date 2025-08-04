/********************************************************************************
** Form generated from reading UI file 'externalmap.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXTERNALMAP_H
#define UI_EXTERNALMAP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_externalmap
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit_city;
    QPushButton *pushButton_browser_city;
    QLineEdit *lineEdit_street;
    QPushButton *pushButton_browser_street;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *externalmap)
    {
        if (externalmap->objectName().isEmpty())
            externalmap->setObjectName("externalmap");
        externalmap->resize(452, 176);
        formLayout = new QFormLayout(externalmap);
        formLayout->setObjectName("formLayout");
        label = new QLabel(externalmap);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label);

        lineEdit_city = new QLineEdit(externalmap);
        lineEdit_city->setObjectName("lineEdit_city");
        lineEdit_city->setClearButtonEnabled(true);

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, lineEdit_city);

        pushButton_browser_city = new QPushButton(externalmap);
        pushButton_browser_city->setObjectName("pushButton_browser_city");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, pushButton_browser_city);

        lineEdit_street = new QLineEdit(externalmap);
        lineEdit_street->setObjectName("lineEdit_street");
        lineEdit_street->setClearButtonEnabled(true);

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, lineEdit_street);

        pushButton_browser_street = new QPushButton(externalmap);
        pushButton_browser_street->setObjectName("pushButton_browser_street");

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, pushButton_browser_street);

        buttonBox = new QDialogButtonBox(externalmap);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Open);

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, buttonBox);


        retranslateUi(externalmap);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, externalmap, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, externalmap, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(externalmap);
    } // setupUi

    void retranslateUi(QDialog *externalmap)
    {
        externalmap->setWindowTitle(QCoreApplication::translate("externalmap", "Open", nullptr));
        label->setText(QCoreApplication::translate("externalmap", "Enter the paths of the required Maps", nullptr));
        lineEdit_city->setPlaceholderText(QCoreApplication::translate("externalmap", "Path of the City Map", nullptr));
        pushButton_browser_city->setText(QCoreApplication::translate("externalmap", "browse", nullptr));
        lineEdit_street->setPlaceholderText(QCoreApplication::translate("externalmap", "Path of the Street Map", nullptr));
        pushButton_browser_street->setText(QCoreApplication::translate("externalmap", "browse", nullptr));
    } // retranslateUi

};

namespace Ui {
    class externalmap: public Ui_externalmap {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXTERNALMAP_H
