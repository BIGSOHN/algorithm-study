#include <iostream>

using namespace std;

long long combination(int m, int n) {
	if (n > m - n) {
		n = m - n;
	}
	long long result = 1;
	for (int i = 0; i < n; i++) {
		result = result * (m - i) / (i + 1);
	}
	return (result);
}

int main() {
	int num, N, M;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> N >> M;
		cout << combination(M, N) << '\n';
	}
	return (0);
}