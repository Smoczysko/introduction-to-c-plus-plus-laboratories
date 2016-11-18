#include "Point.h"
#include "Distance.h"

#include <string>

using namespace std;

Point::Point()
{
}

Point::~Point()
{
}

double Point::distanceFromStart() {
	return distancexy(x, y);
}

double Point::distanceTo(Point point) {
	return distancexy(x, y, point.x, point.y);
}

string Point::toString() {
	string representation = "(";

	representation += to_string(x);
	representation += ",";
	representation += to_string(y);
	representation += ")";

	return representation;
}