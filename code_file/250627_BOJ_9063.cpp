#include <iostream>

using namespace std;

int findMin(int input, int compare) {
	int min;
	if (input < compare) {
		min = input;
	} else {
		min = compare;
	}
	return (min);
}

int findMax(int input, int compare) {
	int max;
	if (input > compare) {
		max = input;
	} else {
		max = compare;
	}
	return (max);
}

int main() {
	int x, y, n;
	int minX = 10000;
	int minY = 10000;
	int maxX = -10000;
	int maxY = -10000;
	
	cin >> n;
	if (n == 1) {
		cin >> x >> y;
		cout << 0 << '\n';
		return (0);
	}
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		minX = findMin(x, minX);
		minY = findMin(y, minY);
		maxX = findMax(x, maxX);
		maxY = findMax(y, maxY);
	}
	cout << abs(maxX - minX) * abs(maxY - minY) << '\n';
	return (0);
}

