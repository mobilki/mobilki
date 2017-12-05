#ifndef AUTHORBOOKS_H
#define AUTHORBOOKS_H

#include "Author.h"
#include "Book.h"
#include <QString>

class AuthorBooks
{
public:
    AuthorBooks();

private:
    Author * IDauthor;
    Book * IDbook;
};

#endif // AUTHORBOOKS_H
