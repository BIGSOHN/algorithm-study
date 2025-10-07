#include <iostream>

using namespace std;

long long factorial(int k) {
	long long result = 1;
	for (int i = k; i > 0; i--) {
		result *= i;
	}
	return (result);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N, M;
	cin >> N >> M;
	long long result = factorial(N) / (factorial(M) * factorial(N - M));
	cout << result << '\n';

	return (0);
}