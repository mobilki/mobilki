#include "Order.h"

Order::Order(Customer customer, QString order_date, QString implem_date)
{
    //customer;
    this->order_date = order_date;
    this->implem_date = implem_date;
}
