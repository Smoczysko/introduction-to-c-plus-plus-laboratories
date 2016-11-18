#include <iostream>
#include <cmath>

#include "ConsoleUtils.h"
#include "Point.h"

using namespace std;

void readCoordinates(Point[], int);
void calculateDistances(Point[], int);

int main() {
	const int SIZE = 4;

	Point points[SIZE];

	cout << "Hello from my application" << endl;

	readCoordinates(points, SIZE);

	cout << endl;

	calculateDistances(points, SIZE);

	system("pause");

	return 0;
}

void readCoordinates(Point points[], int size) {
	for (int i = 0; i < size; i++) {
		cout << "Obtaining coordinates for point " << i + 1 << " out of " << size << endl;
		cout << "Enter first coordinate (x): ";
		points[i].x = readInteger();

		cout << "Enter second coordinate (y): ";
		points[i].y = readInteger();
	}
}

void calculateDistances(Point points[], int size) {
	for (int i = 0; i < size - 1; i++) {
		cout << "Distance between " << points[i].toString() << " and " << points[i + 1].toString() << " is ";
		cout << points[i].distanceTo(points[i + 1]) << endl;
	}
}