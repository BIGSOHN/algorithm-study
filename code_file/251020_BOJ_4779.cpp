#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

void cantor(int length) {
	if (length == 1) {
		cout << '-';
		return ;
	}
	int third = length / 3;
	cantor(third);
	for (int i = 0; i < third; i++) {
		cout << ' ';
	}
	cantor(third);
}

int main() {
	int N;
	while (cin >> N) {
		int length = pow(3, N);
		cantor(length);
		cout << '\n';
	}
	return (0);
}