#include <iostream>   //Ember Fairbanks  A02044817
#include <cstdlib>    //This program generates 3 random numbers used as snowfall
#include <ctime>	  //amounts for a ski resort.
using namespace std;  //The weatherman inputs a max and min amount for snowfall.


int main()
{
	int friSnow, satSnow, sunSnow, maxSnow, minSnow;
	int seed;

	seed = static_cast<int>(time(0));
	srand(seed);

	cout << "I will predict the snowfall for this weekend.\n";
	cout << "Please enter the maximum possible snowfall: ";
	cin >> maxSnow;
	cout << "Please enter the minimum possible snowfall: ";
	cin >> minSnow;

	if (maxSnow - minSnow > 0) {
		friSnow = rand() % (maxSnow - minSnow + 1) + minSnow;
		satSnow = rand() % (maxSnow - minSnow + 1) + minSnow;
		sunSnow = rand() % (maxSnow - minSnow + 1) + minSnow;
		cout << "\nThis weekend's snow report: \n";
		cout << "Friday: " << friSnow << " inches\n";
		cout << "Saturday: " << satSnow << " inches\n";
		cout << "Sunday: " << sunSnow << " inches\n";
		cout << "Have a great weekend!\n\n";
	}
	else {
		cout << "The maximum snowfall is not greater than the minimum snowfall." << endl;
	}

	return 0;
}