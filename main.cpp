#include "FileGenerator.h"
#include "StatsCalculator.h"

int main() {
    FileGenerator::generateRandomNumberFile("output.txt", 1000);
    StatsCalculator calc("output.txt");
    calc.printStatistics();
    return 0;
}