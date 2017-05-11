//Ember Fairbanks  A02044817

#include <iostream>
#include <string>
using namespace std;

//Defining the Car class
class Car {
private:
	int year, speed;
	string make;

public:
	//This is the default constructor. It calls the set
	//functions and sets the variables equal to these values.
	Car();

	//This is a non-default constructor. It recieves a year
	//and make from main and sets the variables to those
	//values and sets speed to 0.
	Car(int, string);

	//This function sets the car year and validates
	//that it is within the correct parameters.
	void setYear(int);

	//This function sets the speed and validates that
	//is is greater than or equal to 0.
	void setSpeed(int);

	//This function sets the make of the car.
	void setMake(string);

	//This function increases the speed by 5 each time 
	//it is called.
	void accelerate();

	//This function decreases the speed by 5 each time 
	//it is called.
	void brake();

	//This function returns the year that has been set.
	int getYear() {	return year;}

	//This function returns the speed that has been set.
	int getSpeed() { return speed;}

	//This function returns the make that has been set.
	string getMake() { return make;}
};
void Car::setYear(int newYear) {
	if (newYear >= 1900 && newYear <= 2030) {
		year = newYear;
	}
	else {
		year = 2013;
	}
}

void Car::setSpeed(int newSpeed) {
	if (newSpeed >= 0) {
		speed = newSpeed;
	}
	else {
		speed = 0;
	}
}

void Car::setMake(string newMake) {
	make = newMake;
}

Car::Car() {
	setYear(1908);
	setSpeed(0);
	setMake("Model T");
}

Car::Car(int aYear, string aMake) {
	setYear(aYear);
	setSpeed(0);
	setMake(aMake);
}

void Car::accelerate() {
	speed += 5;
}

void Car::brake() {
	speed -= 5;
	if (speed <= 0) {
		speed = 0;
	}	
}
//In the main function, we are testing the Car class.
//Each function of the Car class is used to make sure
//they are working properly.
int main() {
	Car testCar, volkswagen(1827, "Jetta");

	for (int count = 0; count < 5; count++) {
		testCar.accelerate();
		cout<<"The speed is "<< testCar.getSpeed()<< " mph" << endl;
	}
	for (int count2 = 0; count2 < 7; count2++) {
		testCar.brake();
		cout << "Year: " << testCar.getYear()<<endl;
		cout << "Make: " << testCar.getMake() << endl;
		cout << "Speed: " << testCar.getSpeed() << " mph" << endl;
	}
	testCar.setYear(2009);
	testCar.setMake("Jeep");
	testCar.setSpeed(75);
	cout << "Year of Test Car: " << testCar.getYear() << endl;
	cout << "Make of Test Car: " << testCar.getMake() << endl;
	cout << "Speed of Test Car: " << testCar.getSpeed() << " mph" << endl;

	volkswagen.setSpeed(-30);
	cout << "Year of Volkswagen: " << volkswagen.getYear() << endl;
	cout << "Make of Volkswagen: " << volkswagen.getMake() << endl;
	cout << "Speed of Volkswagen: " << volkswagen.getSpeed() <<" mph"<< endl;

	return 0;
}