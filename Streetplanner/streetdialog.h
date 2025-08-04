#ifndef STREETDIALOG_H
#define STREETDIALOG_H

#include <QDialog>
#include"street.h"
#include"map.h"

namespace Ui {
class StreetDialog;
}

class StreetDialog : public QDialog
{
    Q_OBJECT

public:
    explicit StreetDialog(QWidget *parent = nullptr);
    ~StreetDialog();

    /**
     * @brief creates a new Street
     * @param map to get the cities which shall be linked
     * @return Pointer on the new street on heap
     */
    Street* createStreet(Map &map);

private:
    Ui::StreetDialog *ui;
};

#endif // STREETDIALOG_H
