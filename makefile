pa2: main.o FileGenerator.o StatsCalculator.o
	g++ -std=c++11 main.o FileGenerator.o StatsCalculator.o -o pa2

main.o: main.cpp FileGenerator.h StatsCalculator.h
	g++ -std=c++11 main.cpp -c

FileGenerator.o: FileGenerator.cpp FileGenerator.h
	g++ -std=c++11 FileGenerator.cpp -c

StatsCalculator.o: StatsCalculator.cpp StatsCalculator.h
	g++ -std=c++11 StatsCalculator.cpp -c

clean:
	rm *.o pa2 "output.txt"