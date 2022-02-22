#include "FileGenerator.h"

void FileGenerator::generateRandomNumberFile(std::string filename, int length) {
    std::fstream genFile(filename, std::ios::out);
    if(genFile.fail()) {
        std::cout << "Could not create file." << std::endl;
        exit(1);
    }
    srand((unsigned int)time(NULL)); //Sets random seed states
    for(int i = 0; i < length; i++) {
        genFile << rand() << std::endl;
    }
    genFile.close();
}