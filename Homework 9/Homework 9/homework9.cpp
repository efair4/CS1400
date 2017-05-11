//Ember Fairbanks  A02044817
//This program collects weather data from a .txt file and outputs it 
//to another .txt file in a better format.
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

int main() 
{
	string location;
	double totalPrecip=0,precip, elevation;
	const int MONTHS = 12, STATIONS=78;
	ofstream output("annualPrecipitation");
	ifstream input("monthlyPrecipitation.txt");
	if (!input)
	{
		cout<<"Error opening file.\n";
		return 0;
	}
	output << "Annual Precipitation Report\n\n";
	output << setw(24) << left << "Weather Station" << setw(9) << right << "Elevation" << setw(15) << "Precipitation\n";
	for (int count = 1; count <= STATIONS; count++) {
		getline(input, location, '\t');
		input >> elevation;
		output << setw(24) << setfill('.') << left << location << setw(7) << setfill(' ') << right << elevation;
		for (int monthCount = 1; monthCount <= MONTHS; monthCount++) {
			input >> precip;
			totalPrecip += precip;
		}
		output << setw(11) << totalPrecip << endl;
		totalPrecip = 0;
		input.ignore();
	}
	input.close();
	output.close();

	return 0;
}