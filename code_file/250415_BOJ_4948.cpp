#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isPrime(int num);

int main () {
	int n;
	int count = 0;
	vector<int> numbers;

	cin >> n;

	while (n != 0) {
		numbers.push_back(n);
		cin >> n;
	}
	for (int i = 0; i < numbers.size(); i++) {
		count = 0;
		for (int j = numbers[i] + 1; j <= numbers[i] * 2; j++) {
			if (isPrime(j) == 1)
				count++;
		}
		cout << count << endl;
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