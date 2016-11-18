#pragma once

#include <string>

using namespace std;

class Point
{
public:
	int x;
	int y;

	Point();
	~Point();

	double distanceFromStart();
	double distanceTo(Point);

	string toString();
};

