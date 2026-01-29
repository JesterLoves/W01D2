// File includes definitions of helper funcions to
// read from a file and
// write to a file

#include "book.h"
#include <iostream>
#include <fstream>
#include <sstream>

void readBooks(const std::string &inputFile, Book books[], int &count)
{
    std::ifsteam inFile(inputFile);

    //read in first line and ignore it
    std::string line;
    std::getline(inFile, line);

    count = 0;

    //loop to read each line until end of file
    //or maximum number is reached
    while (std::getline(inFile, line) && count < MAX_BOOKS )
    {
      std::stringstream ss(line);
      std::string tempTitle;
      int tempYear;
      std::getline(ss, tempTitle, ','); //use getline with delimiter
      ss >> tempYear;

      books[count] = Book(tempTitle, tempYear);
      count++;
    }
    inFile.close();
    return;
}

void writeBooks(const std::string &outputFile, Book books[], int count)
{
    std::ofstream outFile(outputFile);
    outFile << "title,year" << std::endl; //Header line

    //Loop to write book's title and year per line to output file
    for (int i = 0; i < count; i++)
    {
      outFile << books[i].getTitle() << "," << books[i].getYear() << std::endl;
    }
    outFile.close();
    return;
}

