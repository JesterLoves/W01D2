/**
 * This file defines the member functions for the Book class,  
 * such as constructors and getters
 */

#include "Book.h"

Book::Book() : title(""), year(0) {}

Book::Book(std::string t, int y) : title(t), year(y) {}

std::string Book::getTitle() const {
    return title;
}

int Book::getYear() const {
    return year;
}
