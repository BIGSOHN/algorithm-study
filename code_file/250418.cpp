#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int num);

int main () {
	ios::sync_with_stdio(false);
	int n;
	int	i = 2;

	cin >> n;

	vector<int> numbers;

	while (n >= 2) {
		if (n % i == 0 && isPrime(i) == 1) {
			cout << i << "\n";
			n /= i;
			i = 1;
		}
		i++;
	}
	return (0);
}

bool isPrime(int num) {
	int	prime_count = 0;

	if (num == 1)
		return (0);
	if (num == 2 || num == 3)
		return (1);
	for (int i = 2; i <= num / i; i++) {
		if (num % i == 0) {
			return (0);
		}
	}
	return (1);
}