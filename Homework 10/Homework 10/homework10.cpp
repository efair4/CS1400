//Ember Fairbanks  A02044817
//This program receives the high and low temperatures 
//for the days of the week from a text file. It prints the 
//following to the screen: total number of days, average of
//low and high temperatures, and the number of days the 
//temperature was 32 degrees or below (judging off of the low temperatures).
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	ifstream infile("weather.txt");
	string day;
	double highTemp, lowTemp, totalHigh=0, totalLow=0, averageHigh, averageLow;
	int count = 0, freezingDays=0;

	if (!infile) {
		cout << "Error opening file\n";
		return 0;
	}
	while (infile >> day) {
		infile >> highTemp;
		infile >> lowTemp;
		totalHigh += highTemp;
		totalLow += lowTemp;
		if ( lowTemp <= 32 ) {
			freezingDays++;
		}
		count++;
	}
	averageHigh = totalHigh / count;
	averageLow = totalLow / count;
	cout << setprecision(2) << fixed;
	cout << "Number of days recorded: " << count << endl;
	cout << "Average high temperature: " << averageHigh << " degrees Fahrenheit\n";
	cout << "Average low temperature: " << averageLow << " degrees Fahrenheit\n";
	cout << "Number of days at or below freezing: " << freezingDays << endl;

	infile.close();

	return 0;
}