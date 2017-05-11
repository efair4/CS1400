//Ember Fairbanks  A02044817
#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
using namespace std;

const int YEARS = 8, MONTHS = 12;
void readData(int[], double[][MONTHS]);
void printData(int[], double[][MONTHS]);

//Main calls the other functions, readData and printData, as well as
//calculates the total precipitation for the third year and May.
int main() {
	int year[YEARS];
	double precipitation[YEARS][MONTHS];
	double thirdYear = 0, may = 0;

	readData(year,precipitation);
	printData(year, precipitation);

	for (int col = 0; col < MONTHS; col++) {
		thirdYear += precipitation[2][col];
	}
	for (int row = 0; row < YEARS; row++) {
		may += precipitation[row][4];
	}
	cout << "The total rainfall for 2004 was " << thirdYear << " inches.\n";
	cout << "The total rainfall for May from 2002 to 2009 was " << may << " inches.\n";

	return 0;
}
//This function will read the data from the given file and
//store it in 2 arrays: a 1-D array for the year and a 2-D array
//for the precipitation amounts.
void readData(int yearArray[],double precipArray[][MONTHS]) {
	ifstream fin("rainfall.txt");
	if (!fin) {
		cout << "Error. Could not open file. Shutting down...\n";
		exit(EXIT_FAILURE);
	}
	for (int row = 0; row < YEARS; row++) {
		fin >> yearArray[row];
		for (int col = 0; col < MONTHS; col++) {
			fin >> precipArray[row][col];
		}
	}
	fin.close();
}
//This function will print the data gathered in the 
//previous function to the screen in a table format.
void printData(int yearArray[], double precipArray[][MONTHS]) {
	const int WIDTH1 = 7, WIDTH2 = 10;
	string months[MONTHS] = {"January", "February", "March",
		"April", "May", "June", "July", "August", "September", 
		"October", "November", "December"};
	cout << setw(WIDTH1) <<left<< "Year";
	for (int count = 0; count < MONTHS; count++) {
		cout << setw(WIDTH2) << months[count];
	}
	cout << endl;
	for (int row = 0; row < YEARS; row++) {
		cout << setw(WIDTH1)<<yearArray[row];
		for (int col = 0; col < MONTHS; col++) {
			cout << setw(WIDTH2)<<precipArray[row][col];
		}
		cout << endl;
	}
}
