#include <iostream>

using namespace std;

int main() {
	int N, M;

	while (1) {
		cin >> N >> M;
		if (N == 0 && M == 0)
			break;
		if (N < M) {
			if (M % N == 0) {
				cout << "factor";
			}
			else {
				cout << "neither";
			}
		}
		else {
			if (N % M == 0) {
				cout << "multiple";
			}
			else {
				cout << "neither";
			}
		}
		cout << '\n';
	}
}