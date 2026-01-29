#ifndef BOOK_H
#define BOOK_H

/**
 * This file defines the Book class, which represents a book with 
 * a title and publication year. It also declares functions for 
 * reading books from an input file and writing books to an 
 * output file.
 */

#include <string>


/**
 * Class Book represents a book with a title and publication year.
 */
class Book {
    public:
    /**
     * Constructs a Book instance with default title and year.
     */
    Book();

    /**
     * Constructs a Book instance with a specified title and year.
     * @param t The title of the book.
     * @param y The year the book.
     */
    Book(std::string t, int y);

    /**
     * Retrieves the title of the book.
     * @return The title as a string.
     */
    std::string getTitle() const;

    /**
     * Retrieves the year the book was published.
     * @return The year as an integer.
     */
    int getYear() const;

    private:
    std::string title; //Holds the book's title.
    int year;         //Holds the year of publication.
};


// Maximum number of books that can be handled.
const int MAX_BOOKS = 10;

/**
 * Reads books from a given input file and populates the provided array.
 * @param inputFile The name of the input file containing book data.
 * @param books Array of Book objects to be populated.
 * @param count Reference to an integer that counts the number of books read.
 */
void readBooks(const std::string &inputFile, Book books[], int &count);

/**
 * Writes the book information to a specified output file.
 * @param outputFile The name of the output file where book data will be written.
 * @param books Array of Book objects containing data to be written.
 * @param count The number of books to be written to the file.
 */
void writeBooks(const std::string &outputFile, Book books[], int count);

#endif // BOOK_H
