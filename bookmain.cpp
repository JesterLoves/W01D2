//
//

#include "book.h"
#include <iostream>

int main()
{
    Book books[MAX_BOOKS];
    int count = 0;
    std::string inputFile = "books.txt";
    std::string outputFile = "booksCopy.txt";

    readBooks(inputFile, books, count);
    writeBooks(outputFile, books, count);

    std::cout << "Books successfully saved to " << outputFile << std::endl;
    return 0;

}
