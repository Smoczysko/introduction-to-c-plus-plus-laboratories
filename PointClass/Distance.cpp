#include "Distance.h"
#include <cmath>

double distancexy(int x1, int y1, int x2, int y2) {
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

double distancexy(int x, int y) {
	return distancexy(0, 0, x, y);
}