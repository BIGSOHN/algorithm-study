#include <iostream>

using namespace std;

int main() {
	int sum = 0;
	int a, b, c;

	cin >> a;
	cin >> b;
	cin >> c;

	sum = a + b + c;
	if (sum != 180) {
		cout << "Error\n";
		return (0); 
	}
	if (a == b && a == c) {
		cout << "Equilateral\n";
	} else if (a == b || a == c || b == c) {
		cout << "Isosceles\n";
	} else {
		cout << "Scalene\n";
	}
	return (0);
}