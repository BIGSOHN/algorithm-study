#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isPrime(int num);

int main () {
	int n;
	int	m;
	int	o;

	cin >> n;

	vector<int> numbers(n);

	for (int i = 0; i < n; i++) {
		cin >> m;
		numbers[i] = m;
	}

	for (int i = 0; i < numbers.size(); i++) {
		o = numbers[i] / 2;
		for (int j = o; j != 0; j--) {
			if (isPrime(j) == 1 && isPrime(numbers[i] - j) == 1) {
				cout << j << " " << numbers[i] - j<< "\n";
				break ;
			}
		}
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