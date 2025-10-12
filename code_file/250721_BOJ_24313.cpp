#include <iostream>

using namespace std;

int main() {
	int a1, a0, c, n;
	int result;

	cin >> a1 >> a0;
	cin >> c;
	cin >> n;

	if (a1 < c) {
		if (a1 * n + a0 <= c * n) {
			result = 1;
		} else {
			result = 0;
		}
	}
	else if (a1 == c) {
		if (a0 <= 0) {
			result = 1;
		} else {
			result = 0;
		}
	}
	else {
		result = 0;
	}

	cout << result << '\n';

	return (0);
}