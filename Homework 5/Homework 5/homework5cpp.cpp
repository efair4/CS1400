//Ember Fairbanks A02044817
/*This program collects race times from a user and outputs speed in miles per hour
over different intervals*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	string name;
	const int POINT1=44, POINT2=87, POINT3=128, POINT4=165, POINT5=207;
	const int DISTANCE1 =POINT1, DISTANCE2 =POINT2-POINT1, DISTANCE3 =POINT3-POINT2,
		DISTANCE4 = POINT4-POINT3, DISTANCE5 = POINT5-POINT4;
	const int MINUTES_HOUR = 60;    //60 minutes per hour. To be used in speed calculations
	const int WIDTH1 = 20, WIDTH2 = 14, WIDTH3=5, WIDTH4=15;
	int time1, time2, time3, time4, finalTime;
	double speed1, speed2, speed3, speed4, speed5, averageSpeed;

	cout << "Enter the racer's first name: ";
	cin >> name;
	cout << "Enter the time (in minutes) at Check Point 1: ";
	cin >> time1;
	cout << "Enter the time (in minutes) at Check Point 2: ";
	cin >> time2;
	cout << "Enter the time (in minutes) at Check Point 3: ";
	cin >> time3;
	cout << "Enter the time (in minutes) at Check Point 4: ";
	cin >> time4;
	cout << "Enter the time (in minutes) at the Finish Line: ";
	cin >> finalTime;

	int timeDiff1 = time1, timeDiff2 = time2 - time1, timeDiff3 = time3 - time2,
		timeDiff4 = time4 - time3, timeDiff5 = finalTime - time4;
	double totalTime = static_cast<double>(finalTime) / MINUTES_HOUR;

	speed1 = DISTANCE1 / (static_cast<double>(timeDiff1)/MINUTES_HOUR);
	speed2 = DISTANCE2 / (static_cast<double>(timeDiff2)/MINUTES_HOUR);
	speed3 = DISTANCE3 / (static_cast<double>(timeDiff3)/MINUTES_HOUR);
	speed4 = DISTANCE4 / (static_cast<double>(timeDiff4)/MINUTES_HOUR);
	speed5 = DISTANCE5 / (static_cast<double>(timeDiff5)/MINUTES_HOUR);
	averageSpeed = POINT5 / totalTime;

	cout << "\nLOTOJA After Action Review for " << name << endl;
	cout << "\n\t\tRace Details\n";
	cout << setprecision(3);
	cout << fixed;
	cout << left;
	cout << "\n" << setw(WIDTH1) << "Location" << setw(WIDTH2) << "Distance" << setw(WIDTH2) << "Time Diff." << setw(WIDTH2) << "Speed" << endl;
	cout << setfill('.') << setw(WIDTH1) << "Interval 1" << right << setw(WIDTH3) << setfill(' ') << DISTANCE1 << setw(WIDTH2) << timeDiff1 << setw(WIDTH4) << speed1 << left << endl;
	cout << setfill('.') << setw(WIDTH1) << "Interval 2" << right << setw(WIDTH3) << setfill(' ') << DISTANCE2 << setw(WIDTH2) << timeDiff2 << setw(WIDTH4) << speed2 << left << endl;
	cout << setfill('.') << setw(WIDTH1) << "Interval 3" << right << setw(WIDTH3) << setfill(' ') << DISTANCE3 << setw(WIDTH2) << timeDiff3 << setw(WIDTH4) << speed3 << left << endl;
	cout << setfill('.') << setw(WIDTH1) << "Interval 4" << right << setw(WIDTH3) << setfill(' ') << DISTANCE4 << setw(WIDTH2) << timeDiff4 << setw(WIDTH4) << speed4 << left << endl;
	cout << setfill('.') << setw(WIDTH1) << "Interval 5" << right << setw(WIDTH3) << setfill(' ') << DISTANCE5 << setw(WIDTH2) << timeDiff5 << setw(WIDTH4) << speed5 << left << endl;
	cout << "\nThe average speed for the entire course was " << averageSpeed << " mph.\n\n";

	return 0;
}