// Ember Fairbanks A02044817
//This program computes the number of vans needed for a company and the costs included.
#include <iostream>
using namespace std;

int main()
{
	int emp = 115; // emp inserted for employees and vanCap for van capacity
	int vansNeeded, vanCap = 14, seatsLeft;
	double cost = 12.50, taxRate = .0675, totalTax, fare, totalCost;

	vansNeeded = emp / vanCap + 1;
	seatsLeft = vansNeeded * vanCap % emp;
	fare = emp * cost;
	totalTax = fare * taxRate;
	totalCost = fare + totalTax;
	
	cout << "There are " << emp << " passengers.\n";
	cout << "You will need " << vansNeeded << " vans.\n";
	cout << "There are " << seatsLeft << " unused seats.\n";
	cout << "The cost of fare before tax is $" << fare << ".\n";
	cout << "Sales tax amounts to $" << totalTax << ".\n";
	cout << "Your final bill comes to $" << totalCost << ".\n";

	return 0;
}