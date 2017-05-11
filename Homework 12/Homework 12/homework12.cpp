//Ember Fairbanks  A02044817
//This program uses different functions to compute the
//area of a room and the cost of carpeting it.

#include <iostream>
#include <iomanip>
using namespace std;

const int INCHES_FOOT = 144;
const double INSTALL_COST = 5.75;

void getInput(int &, int &, double &);
double computeArea(int, int);
void computeCosts(double, double, double &, double &);

int main()
{
	int widthInches, lengthInches;
	double areaFeet, carpetPrice, costPurchase, costInstall;

	getInput(widthInches, lengthInches, carpetPrice);
	areaFeet = computeArea(widthInches, lengthInches);
	computeCosts(areaFeet, carpetPrice, costPurchase, costInstall);

	cout << setprecision(2) << fixed;
	cout << "\nSize of the room: " << areaFeet << " square feet\n";
	cout << "Cost to purchase carpet: $" << costPurchase << endl;
	cout << "Cost for installation: $" << costInstall << endl << endl;
	
	return 0;
}

//This function gets the width, length, and the cost of carpet per square foot
//from a user and returns them to main.
void getInput(int & width, int & length, double & carpetPrice) {   
	cout << "Width of the room in inches: ";
	cin >> width;
	while (width <= 0) {
		cout << "Please input a number greater than zero: ";
		cin >> width;
	}
	cout << "Length of the room in inches: ";
	cin >> length;
	while (length <= 0) {
		cout << "Please input a number greater than zero: ";
		cin >> length;
	}
	cout << "Cost of the carpet (per square foot): ";
	cin >> carpetPrice;
	while (carpetPrice <= 0) {
		cout << "Please input a number greater than zero: ";
		cin >> carpetPrice;
	}

	return;
}

//This function receives the width and length of the room
//in inches and returns the area in square feet.
double computeArea(int width, int length) {
	double area;

	area = width*length/static_cast<double>(INCHES_FOOT);
	
	return area;
}

//This function receives the area of the room in square feet 
//and the price of carpet per square foot. It returns the cost
//to purchase the carpet and the cost to install the carpet.
void computeCosts(double area, double carpetPrice, double & purchase, double & install) {
	purchase = area*carpetPrice;
	install = area*INSTALL_COST;

	return;
}