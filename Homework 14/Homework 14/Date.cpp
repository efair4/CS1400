//Ember Fairbanks A02044817
#include "Date.h"

Date::Date(){
	setYear(2000);
	setMonth(1);
	setDay(1);
}
int Date::getYear() {
	return year;
}
int Date::getMonth() {
	return month;
}
int Date::getDay() {
	return day;
}
void Date::setYear(int newYear) {
	if (newYear >= 0 && newYear <= 3000) {
		year = newYear;
	}
	else {
		year = 0;
	}
	setDay(day);
}
void Date::setMonth(int newMonth) {
	if (newMonth >= 1 && newMonth <= 12) {
		month = newMonth;
	}
	else {
		month = 1;
	}
	setDay(day);
}
void Date::setDay(int newDay) {
	switch (month) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			if (newDay >= 1 && newDay <= 31) {
				day = newDay;
			}
			else {
				day = 1;
			}
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			if (newDay >= 1 && newDay <= 30) {
				day = newDay;
			}
			else {
				day = 1;
			}
			break;
		case 2: 
			if (year % 100 == 0 && year % 400 != 0) {
				if (newDay >= 1 && newDay <= 28) {
					day = newDay;
				}
				else {
					day = 1;
				}
			}
			else if(year % 4 == 0) {
				if (newDay >= 1 && newDay <= 29) {
					day = newDay;
				}
				else {
					day = 1;
				}
			}
			else {
				if (newDay >= 1 && newDay <= 28) {
					day = newDay;
				}
				else {
					day = 1;
				}
			}
			break;
	}
}
string Date::getDateShort() {
	if (year == 0) {
		return to_string(month) + '/' + to_string(day);
	}
	else {
		return to_string(month) + '/' + to_string(day) + '/' + to_string(year);
	}
}
string Date::getDateLong() {
	string monthName;
	switch (month) {
		case 1:
			monthName = "January";
			break;
		case 2:
			monthName = "February";
			break;
		case 3:
			monthName = "March";
			break;
		case 4:
			monthName = "April";
			break;
		case 5:
			monthName = "May";
			break;
		case 6:
			monthName = "June";
			break;
		case 7:
			monthName = "July";
			break;
		case 8:
			monthName = "August";
			break;
		case 9:
			monthName = "September";
			break;
		case 10:
			monthName = "October";
			break;
		case 11:
			monthName = "November";
			break;
		case 12:
			monthName = "December";
			break;
	}
	if (year == 0) {
		return monthName + ' ' + to_string(day);
	}
	else {
		return monthName + ' ' + to_string(day) + ", " + to_string(year);
	}
}
void Date::setDate(int sMonth, int sDay, int sYear ) {
	setMonth(sMonth);
	setYear(sYear);
	setDay(sDay);
}
Date::Date(int aMonth, int aDay, int aYear) {
	setMonth(aMonth);
	setYear(aYear);
	setDay(aDay);
}
