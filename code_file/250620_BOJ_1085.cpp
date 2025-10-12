#include <iostream>

using namespace std;

int main() {
	int x, y, w, h;
	int xMin, yMin; 

	cin >> x >> y >> w >> h;

	if (h - y < y) {
		yMin = h - y;
	} else {
		yMin = y;
	}

	if (w - x < x) {
		xMin = w - x;
	} else {
		xMin = x;
	}

	if (yMin < xMin) {
		cout << yMin;
	} else {
		cout << xMin;
	}
	return (0);
}