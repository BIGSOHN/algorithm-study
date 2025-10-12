#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	double A, B, V;
	int day = 0;

	cin >> A >> B >> V;
	day = (V - B - 1) / (A - B) + 1;
	cout << day;
}