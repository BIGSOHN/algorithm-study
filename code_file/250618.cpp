#include <iostream>

using namespace std;

int isPrime(int num) {
	int count = 0;

	if (num == 1) {
		return (0);
	}
	for (int i = 1; i * i <= num; i++) {
		if (num % i == 0) {
			count++;
		}
		if (count > 1) {
			return (0);
		}
	}
	return (1);
}

int main() {
	int M, N;
	int sum = 0;
	int smallPrime;

	cin >> M;
	cin >> N;

	for (int i = M; i <= N; i++) {
		if (isPrime(i) == 1) {
			if (sum == 0) {
				smallPrime = i;
			}
			sum += i;
		}
	}
	if (sum == 0) {
		cout << -1 << '\n';
	} else {
		cout << sum << '\n';
		cout << smallPrime << '\n';
	}
}