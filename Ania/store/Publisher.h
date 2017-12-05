#ifndef WYDAWNICTWO_H
#define WYDAWNICTWO_H

#include <QString>
#include "Adress.h"
#include "Contact.h"

class Wydawnictwo
{
public:
    Wydawnictwo(QString);

private:
    QString name;
    Contact * IDcontact;
    Adress * IDadress;
};

#endif // WYDAWNICTWO_H
