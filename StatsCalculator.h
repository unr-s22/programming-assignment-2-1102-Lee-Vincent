#ifndef STATSCALCULATOR_H
#define STATSCALCULATOR_H
#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
#include <algorithm>

class StatsCalculator {
private:
    std::vector<int> lotsOfRandomNumbers;
    std::string filename;
    void init();
public:
    StatsCalculator(std::string filename);
    void printStatistics();
};

#endif //STATSCALCULATOR_H