#include "Book.h"

Book::Book(QString title, int pages, QString rls_date, QString cover, float price){
    this->title = title;
    this->pages = pages;
    this->rls_date = rls_date;
    this->cover = cover;
    this->price = price;
    /*this->publisher = publisher;
    BookGenre * IDgenre;
    Author * IDauthor;*/
}
