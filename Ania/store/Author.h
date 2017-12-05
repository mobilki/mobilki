#ifndef AUTHOR_H
#define AUTHOR_H

#include <QString>

class Author
{
public:
    Author(QString, QString, QString);

private:
    QString name;
    QString surname;
    QString birth_date;
};

#endif // AUTHOR_H
