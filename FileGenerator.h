#ifndef FILEGENERATOR_H
#define FILEGENERATOR_H
#include <iostream>
#include <fstream>

class FileGenerator {
public:
    static void generateRandomNumberFile(std::string filename, int length);
};

#endif //FILEGENERATOR_H