#include <iostream>
#include <cmath>

#include "Distance.h"
#include "ConsoleUtils.h"

using namespace std;

void calculateDistance();

int main() {
	cout << "Hello from my application" << endl;

	int userInput;
	do {
		calculateDistance();

		cout << "Enter 0 if you want to break, otherwise I will ask for next pair of coordinates... ";
		userInput = readInteger();
	} while (userInput != 0);

	system("pause");

	return 0;
}

void calculateDistance() {
	cout << "Enter first coordinate (x): ";
	int x = readInteger();
	
	cout << "Enter second coordinate (y): ";
	int y = readInteger();

	cout << "Distance between (" << x << "," << y << ") and (0,0) is " << distancexy(x, y) << endl;
}