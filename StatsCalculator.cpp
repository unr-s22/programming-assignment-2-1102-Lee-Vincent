#include "StatsCalculator.h"
StatsCalculator::StatsCalculator(std::string filename):filename(filename) {
    init();
}

void StatsCalculator::init() {
    int randNum;
    std::fstream readFile(filename, std::ios::in);
    if(readFile.fail()) {
        std::cout << "Could not create file." << std::endl;
        exit(1);
    }
    while(readFile >> randNum) {
        lotsOfRandomNumbers.push_back(randNum);
    }
    readFile.close();
}

void StatsCalculator::printStatistics() {
    std::cout << std::setw(15) << std::left << "Statistics for " << filename << std::endl;
    std::cout << std::setw(16) << std::left << "Statistics" << std::setw(15) << std::left << "Value" << std::setw(5) << std::left << "Index" << std::endl;
    std::cout << "========================================" << std::endl;
    std::cout << std::setw(15) << std::left << "Minimum" << std::setw(15) << std::left << *std::min_element(lotsOfRandomNumbers.begin(), lotsOfRandomNumbers.end()) << std::setw(10) << std::left << std::min_element(lotsOfRandomNumbers.begin(),lotsOfRandomNumbers.end()) - lotsOfRandomNumbers.begin() << std::endl;
    std::cout << std::setw(15) << std::left << "Maximum" << std::setw(15) << std::left << *std::max_element(lotsOfRandomNumbers.begin(), lotsOfRandomNumbers.end()) << std::setw(10) << std::left << std::max_element(lotsOfRandomNumbers.begin(),lotsOfRandomNumbers.end()) - lotsOfRandomNumbers.begin() << std::endl;;
}
