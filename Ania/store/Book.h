#ifndef BOOK_H
#define BOOK_H

#include <QString>
#include "Publisher.h"
#include "Author.h"
#include "bookgenre.h"

class Book
{
public:
    Book(QString, int, QString, QString, float);

private:
    QString title;
    int pages;
    QString rls_date;
    QString cover;
    Wydawnictwo * IDwydawnictwo;
    float price;
    BookGenre * IDgenre;
    Author * IDauthor;

};

#endif // BOOK_H
