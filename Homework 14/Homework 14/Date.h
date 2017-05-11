//Ember Fairbanks A02044817
#ifndef DATE_H
#define DATE_H
#include <string>
using namespace std;

class Date {
private:
	int month, day, year;

public:
	/*Default constructor. It sets the day to 1, month to 1, and year to 2000*/
	Date();
	/*This returns the year*/
	int getYear();
	/*This returns the month*/
	int getMonth();
	/*This returns the day*/
	int getDay();
	/*This sets the year to the sent value after it is validated to be
	in the range of 0 to 3000. Otherwise the year is set to 0.*/
	void setYear(int);
	/*This sets the month to the sent value afer it is validated to be 
	in the range of 1-12. Otherwise the month is set to 1.*/
	void setMonth(int);
	/*This sets the day to the sent value after is it validated to be
	in the correct range for the month and year. Otherwise the day is set to 1.*/
	void setDay(int);
	/*This returns the date in the format month/day/year. If the year is
	0, the format is month/day.*/
	string getDateShort();
	/*This returns the date in the format MonthName day, year. If the year
	is 0, the format is MonthName day*/
	string getDateLong();
	/*This sets an entire date after calling the other three set functions.*/
	void setDate(int, int, int = 0);
	/*This is a non-default constructor. It sets the year, month, and day
	to the values sent. It runs the set functions and sets the year to 0 
	if no value is sent.*/
	Date(int, int, int = 0);
};
#endif