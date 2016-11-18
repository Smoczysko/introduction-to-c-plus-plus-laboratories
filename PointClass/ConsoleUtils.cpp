#include "ConsoleUtils.h"
#include <iostream>

using namespace std;

int readInteger() {
	int number;

	while (true) {
		cin >> number;

		if (cin) {
			// User input a proper number, no further action required
			break;
		}

		cin.clear(); // Clearing fail bit in cin
		cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Skipping bad input

		cout << "You need to enter proper integer value, please try again..." << endl;
	}

	return number;
}