#include <iostream>

using namespace std;

long long nextPrime(long long num) {
	if (num < 2) {
		return (2);
	}
	while (1) {
		int cnt = 0;
		for (long long i = 2; i <= num / i; i++) {
			if (num % i == 0) {
				cnt++;
				break;
			}
		}
		if (cnt == 0) {
			return num;
		}
		num++;
	}
	return (0);
}

int main() {
	int N;
	long long num;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> num;
		cout << nextPrime(num) << '\n';
	}
	return (0);
}