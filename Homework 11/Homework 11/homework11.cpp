//Ember Fairbanks  A02044817
//This program uses functions to print out
//multiplication tables. It gets a range of
//values from the user.
#include <iostream>
#include <iomanip>
using namespace std;

void multiply(int);

int main() 
{
	int num1, num2;
	cout << "Please enter 2 numbers.\n"
		<< "(The 2nd must be greater than the 1st)\n";
	cin >> num1 >> num2;
	while (num2 < num1) {
		cout << "2nd number is less than 1st number.\n"
			<< "Please enter a number greater than the 1st number";
		cin >> num2;
	}
	for (int table = num1; table <= num2; table++) {
		cout << "\nTimes Table for " << table << endl;
		multiply(table);
	}

	return 0;
}
void multiply(int timesTable)     //This function prints out a single multiplication table
{                                 //for the value it is given.      
	int result;
	for (int count = 0; count <= 12; count++){
		result = timesTable*count;
		cout << left << setw(3) << timesTable << setw(2) << "x" << setw(3) << count << setw(2) << "=" << result << endl;	
	}
	return;
}