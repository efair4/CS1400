//Ember Fairbanks A02044817
//This program computes the average of 6 scores from the user.
#include <iostream>
using namespace std;

int main()
{
	int score1, score2, score3, score4, score5, score6, totalScores;
	int CONSTANT_SCORES = 6;
	double average;

	cout << "Enter your 1st score: ";
	cin >> score1;
	cout << "Enter your 2nd score: ";
	cin >> score2;
	cout << "Enter your 3rd score: ";
	cin >> score3;
	cout << "Enter your 4th score: ";
	cin >> score4;
	cout << "Enter your 5th score: ";
	cin >> score5;
	cout << "Enter your 6th score: ";
	cin >> score6;

	totalScores = score1 + score2 + score3 + score4 + score5 + score6;
	average = static_cast<double>(totalScores) / CONSTANT_SCORES;    //This line converts totatlScores to a double for the calculation of the average variable.
	
	cout << "The program received " << CONSTANT_SCORES << " scores.\n";
	cout << "The average of these scores is: " << average << endl;

	return 0;
}