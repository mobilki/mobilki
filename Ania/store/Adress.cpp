#include "Adress.h"

Adress::Adress(QString country, QString city, QString street, QString nr_building, QString nr_premises, QString postal_code)
{
    this->country = country;
    this->city = city;
    this->street = street;
    this->postal_code = postal_code;
    this->nr_building = nr_building;
    this->nr_premises = nr_premises;
}
