#ifndef CONTACT_H
#define CONTACT_H

#include <QString>

class Contact
{
public:
    Contact(QString,QString,QString);

private:
    QString phone_numb1;
    QString phone_numb2;
    QString email;
};

#endif // CONTACT_H
