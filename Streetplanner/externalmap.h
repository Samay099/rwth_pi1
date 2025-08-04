#ifndef EXTERNALMAP_H
#define EXTERNALMAP_H

#include <QDialog>

namespace Ui {
class externalmap;
}

class externalmap : public QDialog
{
    Q_OBJECT

public:
    explicit externalmap(QWidget *parent = nullptr);
    ~externalmap();

    /**
     * @brief get_Path_City
     * @return Path to the City-Map
     */
    QString get_Path_City();

    /**
     * @brief get_Path_Street
     * @return Path to the Street-map
     */
    QString get_Path_Street();

private slots:
    void on_pushButton_browser_city_clicked();

    void on_pushButton_browser_street_clicked();

private:
    Ui::externalmap *ui;

    QString pathCity;
    QString pathStreet;
};

#endif // EXTERNALMAP_H
