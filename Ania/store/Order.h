#ifndef ORDER_H
#define ORDER_H

#include <QString>
#include "Customer.h"

class Order
{
public:
    Order(Customer,QString,QString);

private:
    Customer * IDcustomer;
    QString order_date;
    QString implem_date;
};

#endif // ORDER_H
