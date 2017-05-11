/*Ember Fairbanks  A02044817
This program gets the number of people in a group
and the activity they would like to do from a user
and then computes the total cost.*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int players, choice;
	double totalCost;
	const double LASER_TAG = 18.75, BOWLING = 6.50, ICE_SKATING = 8.25, ROCK_CLIMBING = 16.50;
	const int MIN_PLAYERS = 1, MIN_CHOICE = 1, MAX_CHOICE = 4;
	cout << setprecision(2) << fixed;
	cout << "How many players are there? ";
	cin >> players;
	while (players < MIN_PLAYERS) {
		cout << "That is not a valid number of players. Please enter a number greater than 0: ";
		cin >> players;
	}
	cout << "Which activity would you like to do? (enter a number from 1 to 4)\n";
	cout << "1. Laser Tag - $"<<LASER_TAG<<" per player\n";
	cout << "2. Bowling - $"<<BOWLING<<" per player\n";
	cout << "3. Ice Skating - $"<<ICE_SKATING<<" per player\n";
	cout << "4. Rock Climbing - $"<<ROCK_CLIMBING<<" per player\n";
	cin >> choice;
	while (choice < MIN_CHOICE || choice > MAX_CHOICE) {
		cout << "That is not a valid choice. Please enter a number from 1 to 4: ";
		cin >> choice;
	}
	if (choice == 1) {
		cout << "\nYou have chosen Laser Tag\n";
		totalCost = LASER_TAG*players;
	}
	else if (choice == 2) {
		cout << "\nYou have chosen Bowling\n";
		totalCost = BOWLING*players;
	}
	else if (choice == 3) {
		cout << "\nYou have chosen Ice Skating\n";
		totalCost = ICE_SKATING*players;
	}
	else {
		cout << "\nYou have chosen Rock Climbing\n";
		totalCost = ROCK_CLIMBING*players;
	}
	
	cout << "There are " << players << " players in your group\n";
	cout << "Your total cost amounts to $" << totalCost << endl;
	cout << "\nThank you for coming!\n\n";
	
	return 0;
}