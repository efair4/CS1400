//Ember Fairbanks  A02044817
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;
//This program reads state names and populations from a file and
//stores them in parallel arrays. It then computes and prints the 
//name and population of each state (including DC), the total population, 
//name and population of the state with the largest and smallest population,
//and the average population.
int main() {
	ifstream fin("statePopulation.txt");
	if (!fin) {
		cout << "Error. Can't open file. Shutting down..." << endl;
		return 0;
	}
	const int SIZE = 51, WIDTH1=22, WIDTH2=15;
	string stateName[SIZE], largestState, smallestState;
	int population[SIZE], largestPop, smallestPop, totalPop=0;
	double averagePop;
	
	for (int index = 0; index < SIZE; index++) {
		fin >> population[index];
		fin.ignore();
		getline(fin, stateName[index],'\n');
	}
	for (int index = 0; index < SIZE; index++) {
		cout << "State: " << left << setw(WIDTH1) << setfill('.') 
			<< stateName[index] << "Population: " << population[index] << endl;
	}

	largestPop = population[0];
	for (int index = 0; index < SIZE; index++) {
		if (population[index] > largestPop) {
			largestPop = population[index];
			largestState = stateName[index];
		}
	}
	smallestPop = population[0];
	for (int index = 0; index < SIZE; index++) {
		if (population[index] < smallestPop) {
			smallestPop = population[index];
			smallestState = stateName[index];
		}
	}
	for (int index = 0; index < SIZE; index++) {
		totalPop += population[index];
	}
	
	averagePop = static_cast<double>(totalPop) / SIZE;
	
	cout << "Total Population: " << totalPop << endl;
	cout << "State with the largest population: " << left << setw(WIDTH2) 
		<< setfill('.') << largestState << "Population: " << largestPop << endl;
	cout << "State with the smallest population: " << left << setw(WIDTH2)
		<< setfill('.') << smallestState << "Population: " << smallestPop << endl;
	cout << setprecision(2) << fixed << "Average Population: " << averagePop << endl;

	return 0;
}