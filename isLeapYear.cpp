#include <iostream>
#include <stdio.h>
using namespace std;

//function to check is leap year or not
int isLeap(int &year) { //reference
	if (year %4 == 0 && isdigit(year)) { //leap year = once in 4 year
		cout << "Year : " << year << " is a leap year.\n";
	} else if (year %4 == 1 && isdigit(year)) {
		cout << "Year : " << year << " is not a leap year.\n";
	} else {
		cout << "wrong input! year is unknown.\n";
	}
	return year;
}

void programName() {
	cout << "===============================\n";
	cout << "====   Leap year Program   ====\n";
	cout << "===============================\n";
}

int main() {
	int year;

	programName();
	cout << "Input year		: "; cin >> year;

	try { //error handler if input isn't an integer/number
		if(!cin >> year) {
			throw year;
		}
	} catch (int error) {
		cout << "error : input year/number only!\n";
	}

	cout << "Inputted year	: " << year << endl;
	cout << "===============================\n";

	isLeap(year); //call isLeap function;

	return 0;
}
