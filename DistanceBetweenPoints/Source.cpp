#include <iostream>
#include <cmath>

#include "Distance.h"
#include "ConsoleUtils.h"

using namespace std;

void readCoordinates(int[], int[], int);
void calculateDistances(int[], int[], int);

int main() {
	const int SIZE = 4;

	int x[SIZE];
	int y[SIZE];

	cout << "Hello from my application" << endl;

	readCoordinates(x, y, SIZE);

	cout << endl;

	calculateDistances(x, y, SIZE);

	system("pause");

	return 0;
}

void readCoordinates(int x[], int y[], int size) {
	for (int i = 0; i < size; i++) {
		cout << "Obtaining coordinates for point " << i + 1 << " out of " << size << endl;
		cout << "Enter first coordinate (x): ";
		x[i] = readInteger();

		cout << "Enter second coordinate (y): ";
		y[i] = readInteger();
	}
}

void calculateDistances(int x[], int y[], int size) {
	for (int i = 0; i < size - 1; i++) {
		cout << "Distance between (" << x[i] << "," << y[i] << ")";
		cout << " and (" << x[i + 1] << "," << y[i + 1] << ") is ";
		cout << distancexy(x[i], y[i], x[i + 1], y[i + 1]) << endl;
	}
}