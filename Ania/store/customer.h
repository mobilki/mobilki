#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <QString>
#include "Adress.h"
#include "Contact.h"

class Customer
{
public:
    Customer(QString,QString,QString,QString);

private:
    Adress * IDadress;
    Contact * IDcontact;
    QString login;
    QString passwd;
    QString name;
    QString surname;
};

#endif // CUSTOMER_H
