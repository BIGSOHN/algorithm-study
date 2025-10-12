#include <iostream>

using namespace std;

int main () {
	int N;
	int sum;
	int result;

	cin >> N;
	result = 0;
	for (int i = 1; i < N; i++) {
		sum = i;
		for (int j = i; j > 0; j /= 10) {
			sum += j % 10;
		}
		if (sum == N) {
			result = i;
			break;
		}
	}

	cout << result;

	return (0);
}