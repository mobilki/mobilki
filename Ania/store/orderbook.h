#ifndef ORDERBOOK_H
#define ORDERBOOK_H

#include <QString>
#include "Order.h"
#include "Book.h"

class OrderBook
{
public:
    OrderBook();

private:
    Order * IDorder;
    Book * IDbook;
    int number;
};

#endif // ORDERBOOK_H
