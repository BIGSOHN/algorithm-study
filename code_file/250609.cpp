#include <iostream>

using namespace std;

int main() {
	int n;
	int dot = 2;

	cin >> n;
	for (int i = 0; i < n; i++) {
		dot = dot * 2 - 1;
	}
	cout << dot * dot << '\n';
	return (0);
}