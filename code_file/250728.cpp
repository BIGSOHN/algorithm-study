#include <iostream>
#include <climits>

using namespace std;

int reculsiveSixCheck(int n);
int checkTripleSix (int n);

int checkTripleSix (int n) {
	while (n > 0) {
		if (n % 10 == 6) {
			if (reculsiveSixCheck(n) >= 3)
				return (1);
		}
		n /= 10;
	}
	return (0);
}

int reculsiveSixCheck(int n) {
	if (n % 10 == 6) {
		return (1 + reculsiveSixCheck(n / 10));
	} else {
		return (0);
	}
}

int main() {
	int N;
	int cnt = 0;

	cin >> N;
	for (int i = 666; i < INT_MAX; i++) {
		if (checkTripleSix(i) == 1) {
			cnt++;
		}
		if (cnt == N) {
			cout << i << '\n';
			return (0);
		}
	}
	return (0);
}