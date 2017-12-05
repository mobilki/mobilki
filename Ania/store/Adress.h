#ifndef ADRESS_H
#define ADRESS_H

#include <QString>

class Adress
{
public:
    Adress(QString,QString,QString,QString,QString,QString);

private:
    QString country;
    QString city;
    QString street;
    QString postal_code;
    QString nr_building;
    QString nr_premises;


};

#endif // ADRES_H
